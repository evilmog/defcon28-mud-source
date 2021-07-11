inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Sparrow");
  set_short( "Sparrow" );
  set_long( "This little sparrow sings merrily.  He is happy to be in this great park and does not miss his natural predators at all." );

  set_gender("male");
  set_race("human");

  set_level(1);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 5);
  set_skill("combat/defense", 5);
}
