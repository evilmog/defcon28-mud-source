inherit "/std/monster";
inherit "/std/modules/m_triggers";

#include "../domain.h"

void setup(void) {
  set_name("Engineer Carson");
add_id("engineer");
add_id("carson");
  set_short( "Engineer Carson" );
  set_long( "Fat, sweaty and balding, Engineer Carson is the epitome of a man who is in serious need of exercise. Carson was once a pretty lean man, but too much sitting and an obsessive liking for sugar-coated chocolate doughnuts have piled up the fat on him. He is a representative of City Engineering - one of their less docile ones, and he's hanging around here to protect the City Engineers' interests. Naturally, being a City Engineer has made him more than a little pompous." );

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

private int is_carson(string str) {
   return lowercase(str) == "carson";
}

void handle_say(string str) {
   string a, b, message;
   int q7track;
   object player;

   sscanf(str, "%s %s", a, b);
   if (is_carson(a)) {
      return;
   }

   if (sscanf(str, "%s says: %s\n", a, b) != 2) {
      return;
   }
   str = lowercase(b);
   player = USER_D->find_player(a);
   q7track = player->query_q7_tracker();

   if (contains("rats", str)) {
      if (q7track == 1 || q7track == 3) {
        message = "say thanks for killing the rat queen, now we need to deal with the cyberslime";
      } else {
        return;
      }
   }
   if (contains("cyberslime", str)) {
      if (q7track == 3) {
        message = "say thank you for killing the cyberslime, go talk to norman about the .....situation....";
      } else {
        message = "say go search the reactor under the prison...kill it and return to me....";
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
