inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Maintenance Droid");
add_id("maintenance");
add_id("droid");
add_id("maintenancedroid");
  set_short( "Maintenance Droid" );
  set_long( "This white droid is essentially a mechanized janitor. It is a squat-looking affair, tracks instead of legs and maintenance apparatus instead of hands. Its bulky torso is caused by it having to lug around most of its cleaning materials, from water to cleaning fluid. Although it is rather wide, you see that its tracks have been specially designed to provide maximum moving space." );

  set_gender("neuter");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
