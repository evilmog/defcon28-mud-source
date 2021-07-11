inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("idle maintenance droid");
add_id("idle");
add_id("maintenance");
add_id("droid");
add_id("maintenancedroid");
add_id("idledroid");
  set_short( "idle maintenance droid" );
  set_long( "This squat pepperpot-shaped droid is currently in its dock as it undergoes basic diagnostics checks and maintenance runs to assure that it is functioning in top and optimum condition at all times. Do not disturb its rest." );

  set_gender("neuter");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
