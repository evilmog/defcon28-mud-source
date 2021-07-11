inherit "/std/monster";
inherit "/std/modules/m_triggers";

#include "../domain.h"

void setup(void) {
  set_name("Agent");
add_id("agent");

  set_short( "EvilMogs Agent" );
  set_long("This appears to be a no nonsense person in a black suit. He appears to be wearing sunglasses even though its dark inside.");
  
  set_gender("male");
  set_race("human");

  set_level(40);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 200);
  set_skill("combat/defense", 200);
}

private int contains(string needle, string hay) {
   return sscanf(hay, "%*s" + needle + "%*s") == 2;
}

private int is_agent(string str) {
   return lowercase(str) == "agent";
}

void handle_say(string str) {
   string a, b, message;
   int q7track;
   object player;

   sscanf(str, "%s %s", a, b);
   if (is_agent(a)) {
      return;
   }

   if (sscanf(str, "%s says: %s\n", a, b) != 2) {
      return;
   }
   str = lowercase(b);
   player = USER_D->find_player(a);
   q7track = player->query_q7_tracker();
   if (contains("evilmog", str)) {
      if (q7track == 31) {
        message = "say EvilMog runs this place.....if you want to help him out and deal with a situation I might be able to help with access codes...";
      } else {
        return;
      }
   }
   if (contains("access", str)) {
      if (q7track == 31) {
        message = "say Here's the drill....I need you to eliminate johnson...";
      } else {
        return;
      }
   }
   if (contains("johns", str)) {
      if (q7track == 31) {
        message = "say Johnson has been known to be problematic. Eliminate him and I'll send you the access codes....";
      } else {
        return;
      }
   }
   
   if (contains("sabotage", str)) {
      message = "say I blame the rats";
   }
   if (contains("evidence", str)) {
      message = "say all evidence is purely circumstantial";
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
