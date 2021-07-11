#include "../domain.h"

inherit "/std/modules/m_triggers";
inherit "/std/monster";

int interval_count, tick_till_next_action;
string *fidget_actions;

void setup(void) {
  set_name("Steve");
  set_short( "Steve, High-Priest of the Church of the Sacred Gears" );
  set_long( "At some point over mankind's history, humanity stopped worshipping unseen spiritual entities and started worshipping their technological wonders instead. At the forefront of the faithful is Steve: a short, balding man in his 50s who stands ready to bless the flock." );

  set_gender("male");
  set_race("human");

  set_level(30);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 150);
  set_skill("combat/defense", 150);
  set_skill("combat/blunt/small", 150);
}

  fidget_actions = ({
    "say Yes, nowhere is safe. None shall find it.",
    "say May the technology of peace be with you all.",
    "say Be one with root!",
    "emote murmurs a blessing over a supplicant",
    "say Technology is a part of life, and we are but servants to it!",
});