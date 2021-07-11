inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Bouncer");
add_id("roxbury");
add_id("bouncer");
add_id("roxburybouncer");
  set_short( "Roxbury Bouncer" );
  set_long( "At first you see only a wall of fabric and muscle.  Then you realize that it is only an arm, and look up into the hard and cruel face of one of the Roxbury's bouncers.  He stares menacingly at you, waiting to punish you for the slightest wrong doing." );

  set_gender("male");
  set_race("human");

  set_level(12);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 60);
  set_skill("combat/defense", 60);
}
