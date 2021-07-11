inherit "/std/monster";
inherit "/std/modules/m_triggers";

#include "../domain.h"

void setup(void) {
  set_name("Lrak");
  set_short( "Mine Recruiter Lrak" );
  set_long( "A medium height human male in his mid-20s with sandy brown hair, Lrak looks quite at ease in his Company-issued uniform.  His touch padd, however, is another matter.  He clutches it as if his very life depends on it (which it does, whenever the mining quotas are reviewed)." );

  set_gender("male");
  set_race("human");

  set_level(1);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 5);
  set_skill("combat/defense", 5);
}

private int contains(string needle, string hay) {
   return sscanf(hay, "%*s" + needle + "%*s") == 2;
}

private int is_lrak(string str) {
   return lowercase(str) == "lrak";
}

void handle_say(string str) {
   string a, b, message;
   object player;

   sscanf(str, "%s %s", a, b);
   if (is_lrak(a)) {
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
   if (contains("west", str)) {
     message = "say the west mine can be found by going n, n, w, w, w, w, nw, nw, and then 7x west";
   }
   if (contains("south", str)) {
     message = "say the south mine can be found by going n, n, w, w, w, w, nw, nw, and then 7x south";
   }
   if (contains("east", str)) {
     message = "say the east mine can be found by going n, n, w, w, w, w, nw, nw, and then 7x east";
   }
   if (contains("mine", str)) {
     message = "say there are 3 mines, west which is open to anybody, south and east which require mining passes.";
   }
   if (contains("pass", str)) {
     message = "say you can purchase a mining pass 2x sw from 0,0,0 or 000";
   }
   if (contains("000", str)) {
     message = "say type compass in scifi to find 0,0,0";
   }
   if (!message) {
      message = "say ask me about the crypto currency mines";
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
