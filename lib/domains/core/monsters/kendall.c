inherit "/std/monster";
inherit "/std/modules/m_triggers";

#include "../domain.h"

void setup(void) {
  set_name("Foreman Kendall");
add_id("kendall");
add_id("foreman");
  set_short( "Foreman Kendall" );
  set_long( "Foreman Kendall is the person who answers directly to the higher-ups regarding the fusion generator here. He is a plain-looking man, but the evil glint in his eyes betray a mind which is both devious and relentless. Having worked his way up from a normal reactor tech, Kendall now enjoys the privileges of a foreman - which also includes a very difficult time when the generator gets blown up." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}

private int contains(string needle, string hay) {
   return sscanf(hay, "%*s" + needle + "%*s") == 2;
}

private int is_kendall(string str) {
   return lowercase(str) == "kendall";
}

void handle_say(string str) {
   string a, b, message;
   int q7track;
   object player;

   sscanf(str, "%s %s", a, b);
   if (is_kendall(a)) {
      return;
   }

   if (sscanf(str, "%s says: %s\n", a, b) != 2) {
      return;
   }
   str = lowercase(b);
   player = USER_D->find_player(a);
   q7track = player->query_q7_tracker();
   if (contains("rats", str)) {
      if (q7track == 1) {
        message = "say go find carson and ask him about rats";
      } else {
        message = "say I hate rats, they are worse than sabotage...";
      }
   }
   if (contains("sabotage", str)) {
      message = "say it must have been rats....we are infested.";
   }
   if (contains("infested", str)) {
      message = "say I hear rumors of a bio lab, kill the rat queen and I'll make it worth your while.";
   }
   if (contains("lab",  str)) {
      message = "say The bio lab is somewhere in shay park.";
   }
   if (!message) {
      return;
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
