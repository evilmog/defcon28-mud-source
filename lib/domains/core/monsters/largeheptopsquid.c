inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Large Heptosquid");
add_id("squid");
add_id("heptosquid");
add_id("largeheptosquid");
  set_short( "Large Heptosquid" );
  set_long( "The huge eyes staring at you from out of the waters is not artificial... you're actually looking at a very large heptosquid. The fat tentacles are all around and the body looks solid, like there's an extra layer of thick skin on it. You might find this to be a dangerous adversary indeed. " );

  set_gender("neuter");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 100);
  set_skill("combat/defense", 100);
}
