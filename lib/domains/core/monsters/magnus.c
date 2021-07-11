inherit "/std/monster";
inherit "/std/modules/m_triggers";


#include "../domain.h"

void setup(void) {
  set_name("Magnus");
  set_short( "Magnus" );
  set_long( "Magnus is a middle-aged cyborg with a large, nasty looking scar running from his left cheek down to his jawbone.  Despite his somewhat rough appearance, he has a friendly sparkle in his eye." );

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

private int is_magnus(string str) {
   return lowercase(str) == "magnus";
}

void handle_say(string str) {
   string a, b, message;
   object player;

   sscanf(str, "%s %s", a, b);
   if (is_magnus(a)) {
      return;
   }

   if (contains("enters", b)) {
      message = "say Hi";
      respond(message);
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
   if (contains("help", str)) {
      message = "say You can ask me about pay, mining, compass, shopping, permadeath and quests";
   }
   if (contains("newbie", str)) {
      message = "say You can ask me about pay, mining, compass, shopping, permadeath and quests, ctf";
   }
   if (contains("pay", str)) {
      message = "say the pay master can be found at x-20, y-10, z0";
   }
   if (contains("mining", str)) {
      message = "say you can make credits by mining, talk to lrak about mines";
   }
   if (contains("compass", str)) {
      message = "say The company installed internal location trackers years ago, type compass to find out where you are";
   }
   if (contains("shopping", str)) {
      message = "say the majority of the shopping is in the se and sw quadrants of this dome";
   }
   if (contains("permadeath", str)) {
      message = "say When you die you get reset to level 1 unless you have deathproof insurance, it can be purchased at x-10, y-40, z0";
   }
   if (contains("quests", str)) {
      message = "say The two major quests active in this zone are the sewer and pottles quests";
   }
   if (contains("sewer", str)) {
      message = "say There is a monster in the steam generators of the sewer, but steam blocks the vents, find arnie to get started.";
   }
   if (contains("pottles", str)) {
      message = "say A genetic research project has escaped, find it in the second level of the sewers and kill it";
   }
   if (contains("console", str)) {
      message = "say the cheat console is at X: 0, Y:0, Z 10";
   }
   if (contains("ctf", str)) {
      message = "say find out more at https://ctf.mog.ninja or https://mog.ninja";
   }
   if (contains("wizard", str)) {
      message = "say to become a wizard and get access to the cli in the ctf mud you must hit level 32 and complete all quests including newbie, pottles, sewer, wizard, and ticket.";
   }
   if (!message) {
      message = "say ask me about newbie";
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
