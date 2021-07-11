inherit "/std/monster";
inherit "/std/modules/m_triggers";

#include "../domain.h"

void setup(void) {
  set_name("Norman");
add_id("norman");
  set_short( "Director Norman" );
  set_long( "Director Norman is the man in charge of the Company's dealings in information and intelligence. His tall, thin and pale form might not be much to look at, but Norman is one of the most cunning businessman in Core. His field gives him free rein of the information in possession of the Company, and armed with this knowledge, he is able to make very profitable decisions apart from the usual information business of the Company over which he presides. A man of very few words, since Norman himself is aware that anything he says can be counted as information. And he intends to make a sale on every piece of info he lets out." );

  set_gender("male");
  set_race("human");

  set_level(4);
  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}

private int contains(string needle, string hay) {
   return sscanf(hay, "%*s" + needle + "%*s") == 2;
}

private int is_norman(string str) {
   return lowercase(str) == "norman";
}

void handle_say(string str) {
   string a, b, message;
   int q7track;
   object player, wallet;

   sscanf(str, "%s %s", a, b);
   if (is_norman(a)) {
      return;
   }

   if (sscanf(str, "%s says: %s\n", a, b) != 2) {
      return;
   }
   str = lowercase(b);
   player = USER_D->find_player(a);
   q7track = player->query_q7_tracker();
   wallet = player->present("Wallet");
   if (contains("situation", str)) {
      if (q7track == 3) {
        message = "say ahhh yes...are you here to help?";
      } else {
        return;
      }
   }

   if (contains("help", str)) {
      if (q7track == 3) {
        message = "say I need you to go to the roxbury and find my wallet...";
      } else {
        return;
      }
   }

   if (contains("wallet", str)) {
      if ((q7track == 3)) {
        message = "say I need you to go to the roxbury...";
      }
      if ((q7track == 3) && wallet) {
        message = "say thank you for finding my wallet...go to the reactor storeroom and use my access card on the touchpadd....";
        wallet->destruct();
        player->set_q7_tracker(7);
      } else {
        if (wallet) {
          wallet->destruct();
          message = "say where did you get that, I'm taking that back";
        }
      }
   }

   if (contains("roxbury", str)) {
      if (q7track == 3) {
        message = "say I lost my wallet in the roxbury....";
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
