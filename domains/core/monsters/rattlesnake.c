inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Rattlesnake");
add_id("rattle");
add_id("snake");
add_id("rattlenake");
  set_short( "Rattlesnake" );
  set_long( "This rattlesnake looks menacing, but cannot do much harm since its poison sacs have been removed.  He can still bite, so it would be advisable not to annoy him." );

  set_gender("male");
  set_race("human");

  set_level(2);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 10);
  set_skill("combat/defense", 10);
}
