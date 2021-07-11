inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Dancer");
add_id("pole");
add_id("dancer");
add_id("poledancer");
  set_short( "Pole Dancer" );
  set_long( "All legs, this pole dancer sure knows how to move!  By the look of her, shes only about 21. Her long blonde hair flies around her as she moves to the music, seductively moving her hips.  It's no wonder so many guys are gathered around the poles base, drooling." );

  set_gender("female");
  set_race("human");

  set_level(10);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 50);
  set_skill("combat/defense", 50);
}
