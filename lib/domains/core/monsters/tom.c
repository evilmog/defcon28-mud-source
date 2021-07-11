inherit "/std/monster";
inherit "/std/modules/m_triggers";

#include "../domain.h"

void setup(void) {
  set_name("Ol Tom");
add_id("ol");
add_id("tom");
add_id("oltom");
  set_short( "Ol Tom the miner" );
  set_long( "Ol Tom is legendary. He s one of the old miners who were brought from Earth to help the Company with the mining tactics on Core. It is said that prior to his assignment on Core, Tom was one of those daredevil miners who was sent down to deal with lethal situations in the mine. Now, he's just a wrinkled old coot who just sits around reading in the North Domes reading rooms, ever waiting for the time the Company needs him again for some death-defying task." );

  set_gender("male");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}

private int contains(string needle, string hay) {
   return sscanf(hay, "%*s" + needle + "%*s") == 2;
}

private int is_tom(string str) {
   return lowercase(str) == "tom";
}

void handle_say(string str) {
   string a, b, message;
   int q7track;
   object player, wallet;

   sscanf(str, "%s %s", a, b);
   if (is_tom(a)) {
      return;
   }

   if (sscanf(str, "%s says: %s\n", a, b) != 2) {
      return;
   }
   str = lowercase(b);
   player = USER_D->find_player(a);
   q7track = player->query_q7_tracker();
   if (contains("evidence", str)) {
      if (q7track == 15) {
        message = "say you didn't get this from me but it looks like grey is on the take and that bastard evilmog is behind everything.";
      } else {
        return;
      }
   }

   if (contains("evilmog", str)) {
      if (q7track == 15) {
        message = "say I think EvilMog is behind everything, take this access card and return to the touch padd...";
        this_player()->set_q7_tracker(31);
      } else {
        return;
      }
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
