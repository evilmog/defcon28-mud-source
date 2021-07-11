#include "../domain.h"

inherit "/std/monster";
inherit "/std/modules/m_triggers";

int interval_count, tick_till_next_action;
string *fidget_actions;
string *taunts;

object add_object_to_inventory(string name);
void create_ice(void);
void do_extra_actions(void);
void fidget_action(void);
void fight_action(void);
object *matching_inventory_items(string query);
void outside_message(string str);
void play_with_pasties(void);
void populate_actions(void);
string query_Name(void);
void reset_tick_counter(void);
void setup(void);

object add_object_to_inventory(string name) {
  object obj;

  obj = clone_object(name);
  if (obj) {
    obj->setup();
    obj->move(this_object());
  }

  return obj;
}

void create_ice(void) {
  object *items;

  items = matching_inventory_items("smirnoff");
  if (sizeof(items) <= 4) {
    respond("chuckle");
    add_object_to_inventory(DIR + "/objects/ice_bottle.c");
  }
}

void do_extra_actions(void) {
  tick_till_next_action = tick_till_next_action - 1;
  if (tick_till_next_action <= 0) {
    reset_tick_counter();

    if (is_fighting()) {
      fight_action();
    } else {
      fidget_action();
    }
  }
}

void fidget_action(void) {
  switch (random(100)) {
    case 0..30:
      if (!fidget_actions) {
        populate_actions();
      }

      respond(fidget_actions[random(sizeof(fidget_actions))]);
      break;
    case 31..80:
      play_with_pasties();
      break;
    case 81..90:
      create_ice();
    case 91..95:
      respond("say mmmm more pasties");
      add_object_to_inventory(DIR + "/objects/nipple_stickers.c");
      break;
    default:
      break;
  }
}

void fight_action(void) {
  float health_ratio;
  object *items;
  int i;

  if (!taunts) {
    populate_actions();
  }

  health_ratio = ((float)this_object()->query_hp() / (float)this_object()->query_max_hp());
  if (health_ratio < 0.5) {
    items = matching_inventory_items("smirnoff");
    if (sizeof(items) == 0) {
      respond(taunts[random(sizeof(taunts))]);
      return;
    }

    i = random(sizeof(items));
    if (items[i]->is_wielded()) {
      do_unwield(items[i]);
    }

    items[i]->ice_target(this_object());
  } else {
    respond(taunts[random(sizeof(taunts))]);
  }
}

object *matching_inventory_items(string query) {
  int i;
  object *inv, *relevant;

  inv = this_object()->query_inventory();
  relevant = ( { } );

  for (i = 0; i < sizeof(inv); i++) {
    if (inv[i]->is_id(query)) {
      relevant |= ( { inv[i] } );
    }
  }

  return relevant;
}

void outside_message(string str) {
  string tgt;

  str = ANSI_D->strip_colors(str);
  if (sscanf(str, "%s attacks you.", tgt) == 1) {
    respond("say Hey, what the hell " + tgt + "!");
    tick_till_next_action = 0;
  }

  if (is_fighting()) {
    return;
  }

  /* TODO: Normal responses... */
}

void play_with_pasties(void) {
  int i;
  object *items;

  items = matching_inventory_items("pasties");
  if (sizeof(items) == 0) {
    respond("say Oh! Here are my pasties.");
    add_object_to_inventory(DIR + "/objects/nipple_stickers.c");
    return;
  }

  i = random(sizeof(items));
  if (items[i]->is_worn()) {
    respond("emote peels off " + lowercase(items[i]->query_short()));
    do_remove(items[i]);
  } else {
    if (random(2)) {
      items[i]->perform_flick(this_object());
    } else {
      do_wear(items[i]);
      respond("emote puts on " + lowercase(items[i]->query_short()));
    }
  }
}

void populate_actions(void) {
  fidget_actions = ({
    "say I thought I left a stack of shirts around here somewhere...",
    "smile",
    "nod",
    "emote looks around vaguely confused",
    "say You can also call me Sam if you prefer...",
  });

  taunts = ({
    "cackle",
    "say Ack I felt that!",
    "scream",
    "say Fighting like that I bet you can't even crack WEP!",
    "dervish",
  });
}

string query_Name(void) {
  return "pasties";
}

void reset_tick_counter(void) {
  if (!is_fighting()) {
    tick_till_next_action = random(45) + 15;
  }
}

void setup(void) {
  object obj;

  set_name("pasties");
  add_id("sam");

  set_gender("neuter");
  set_short("Pasties of the Old Order");
  set_long("A mild natured questing machine");
  set_race("human");
  set_level(20);

  set_hit_skill("combat/sharp/large");
  set_skill("combat/defense", 100);
  set_skill("combat/sharp/large", 100);
  set_skill("combat/unarmed", 100);

  interval_count = 0;
  reset_tick_counter();
  populate_actions();

  obj = add_object_to_inventory(DIR + "/objects/con_shirt.c");
  do_wear(obj);
  obj = add_object_to_inventory(DIR + "/objects/ice_bottle.c");
  do_wield(obj);
  obj = add_object_to_inventory(DIR + "/objects/ice_bottle.c");
  do_wield(obj);
}
