inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Mosquito");
  set_short( "Mosquito" );
  set_long( "This huge mosquito has long, tenuous legs that allow it to walk on water, not breaking the surface tension.  It has a long, needle-like bill used to suck the blood of most warm blooded creatures." );

  set_gender("male");
  set_race("human");

  set_level(1);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 5);
  set_skill("combat/defense", 5);
}
