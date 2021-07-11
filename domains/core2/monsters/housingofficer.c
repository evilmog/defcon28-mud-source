inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Housing Officer");
add_id("housing");
add_id("officer");
add_id("housingofficer");
  set_short( "A housing officer" );
  set_long( "This tired overworked housing officer looks overstressed. Dark rings are around his eyes, and he seems to be constantly nodding off at his desk. It would appear that the poor officer has been up for weeks trying to finish his workload, but there does not seem to be an end to what he is doing." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
