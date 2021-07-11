inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Tangleweed");
add_id("tangle");
add_id("weed");
add_id("tangleweed");
  set_short( "Tangleweed" );
  set_long( "At the moment, the tangleweed is not moving. But eyeing the hooks on the weeds vines, you are sure that it is an adequate predator when it comes to a fight. This is one plant you don't want to tangle with." );

  set_gender("neuter");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
