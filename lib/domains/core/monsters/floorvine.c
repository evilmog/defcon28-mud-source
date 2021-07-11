inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Floorvine");
add_id("floor");
add_id("vine");
add_id("floorvine");
  set_short( "Floorvine" );
  set_long( "This vine on the floor looks harmless enough, but you recognize it as belonging to a mutated species of plants from Earth which is capable of defending itself against attacks from other beings." );

  set_gender("neuter");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
