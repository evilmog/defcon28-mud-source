inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Water Snake");
add_id("water");
add_id("snake");
add_id("watersnake");
  set_short( "Water snake" );
  set_long( "This thin water snake is just snaking around in the waters, looking for prey like rats and such. It won't bother you." );

  set_gender("male");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
