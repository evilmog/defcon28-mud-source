inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Wasteworm");
add_id("worm");
add_id("wasteworm");
  set_short( "Wasteworm" );
  set_long( "Measuring only a metre long, this native of the sewage waste is a sort of evolved slug. Now, with its single eye and jaw, it seems intent on tearing you apart! " );

  set_gender("neuter");
  set_race("worm");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 100);
  set_skill("combat/defense", 15);
}
