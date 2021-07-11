#include "../domain.h"

inherit "/std/weapon";

void set_sword_skill(string s) {
   if (!is_standard_weapon_skill(s)) {
      s = "small";
   }
   set_weapon_skill("combat/edge/" + s);
}

void setup(void) {
   set_id("sword of 1000 truths");
   add_id("sword");
   add_id("1000");
   set_adj("1000");
   set_short("A sword of 1000 truths");
   set_long("This is the fabled sword of 1000 truths, it can destroy anything, you can power it up with '%^MAGENTA%^powerup%^RESET%^' Be warned this sword has a 20% chance of killing you when you power it up. Type %^MAGENTA%^recycle%^RESET%^ to recycle me.");
   set_gettable(1);

   set_min_damage(1);
   set_max_damage(1);
   set_hit_bonus(1);

   add_action("do_recycle", "recycle");
   add_action("do_powerup", "powerup");
   set_wield_type("single");
   set_weapon_actions(({
      "slash", "slice", "dice", "cut", "gash", "stab", "poke", "gouge"
      }));
   set_sword_skill("small");

   set_value(100000000);
   set_size(2);
   set_weight(600);

}

int do_powerup(string arg) {
  int powerup;
  powerup = random(5);
  if (query_admin(this_player())) {
    write("Holy hell you are lucky, your sword powered up");
    this_object()->set_min_damage(1000);
    this_object()->set_max_damage(2000);
    this_object()->set_hit_bonus(1000);
    return 1;
  }

  if (powerup == 1) {
    write("shit I guess you died");
    this_player()->die();
    return 1;
  }

  if (powerup == 2) {
    write("Your sword has sortof powered up");
    this_object()->set_min_damage(1);
    this_object()->set_max_damage(1000);
    this_object()->set_hit_bonus(10);
    return 1;
  }
  if (powerup == 3) {
    write("shit I guess you died");
    this_player()->die();
    return 1;
  }
  if (powerup == 4) {
    write("Your sword is mostly useless, but atleast you aren't dead, retry?");
    this_object()->set_min_damage(1);
    this_object()->set_max_damage(1);
    this_object()->set_hit_bonus(0);
    return 1;
  }
  if (powerup == 5) {
    write("Its a normal sword.....");
    this_object()->set_min_damage(1);
    this_object()->set_max_damage(20);
    this_object()->set_hit_bonus(0);
    return 1;
  }
  do_powerup("");
  return 1;
}

int destroy_me(string args) {
  this_object()->destruct();
  return 1;
}
