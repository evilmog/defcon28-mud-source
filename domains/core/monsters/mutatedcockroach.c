inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("mutated cockroach");
add_id("cockroach");
add_id("trevor");
add_id("mutatedcockroach");
  set_short( "mutated cockroach" );
  set_long( "A tiny little roach scurries about, eating rice crumbs. Its small little feet are dragging a trail of sticky slime around." );

  set_gender("neuter");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
