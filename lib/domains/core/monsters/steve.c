#include "../domain.h"

inherit "/std/monster";

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
