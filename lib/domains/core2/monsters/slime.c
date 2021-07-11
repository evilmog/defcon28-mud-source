inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Slime");
add_id("blob");
add_id("slime");
  set_short( "blob of living slime" );
  set_long( "All you see is a large amount of slime gathered in an area of the room. You can see through it, the ooze being transparent. This must have been one of the Company's failed experiments, stored away in a corner of the sewers, never to be seen again." );

  set_gender("neuter");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
