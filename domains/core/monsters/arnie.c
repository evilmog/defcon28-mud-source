inherit "/std/monster";
inherit "/std/modules/m_triggers";

#include "../domain.h"

void setup(void) {
  set_name("Arnie");

  set_objects( 
 DIR+"/objects/tracker.c"
);
  set_short( "Arnie" );
  set_long( "Wild eyes look at you from behind long dishevelled hair. Arnie's face is covered with wrinkles which contorts the old hermit's face whenever he smiles nervously. The stink which he is exuding is enhanced by the bundled clothes covering his body, clothes which you doubt have ever been washed." );

  set_gender("male");
  set_race("human");

  set_level(8);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 200);
  set_skill("combat/defense", 200);

  if (next_clone()) {
    call_out("destroy_me", 0.1, "");
  }
}

private int contains(string needle, string hay) {
   return sscanf(hay, "%*s" + needle + "%*s") == 2;
}

private int is_arnie(string str) {
   return lowercase(str) == "arnie";
}

void handle_say(string str) {
   string a, b, message;
   object player;

   sscanf(str, "%s %s", a, b);
   if (is_arnie(a)) {
      return;
   }

   if (sscanf(str, "%s says: %s\n", a, b) != 2) {
      return;
   }
   str = lowercase(b);
   player = USER_D->find_player(a);
   if (contains("shut up", str)) {
      message = "say Why do you want me to shut up ?";
   }
   if (contains("sewer", str)) {
      message = "say I hate that evil monster";
   }
   if (contains("monster", str)) {
      message = "say the monster is in the steam generators but its blocked by a vent";
   }
   if (contains("vent", str)) {
      message = "say the vent is blocked by steam";
   }
   if (contains("steam", str)) {
      message = "say to disable the steam you need to find generator control";
   }
   if (contains("control", str)) {
      message = "say you need a secard to access generator control";
   }
   if (contains("secard", str)) {
      message = "say you need a tracker to find the secard";
   }
   if (contains("tracker", str)) {
      message = "say to get the tracker you will have to pry it from my cold dead hands";
   }
   if (!message) {
      message = "emote ponders the sewer monster";
   }
   respond(message);
}

void outside_message(string str) {
   /* XXX some from these can be spoofed with player emotes... */
   if (is_fighting()) {
      return;
   }

   str = ANSI_D->strip_colors(str);

   handle_say(str);

}

int destroy_me(string args) {
  this_object()->destruct();
  return 1;
}
