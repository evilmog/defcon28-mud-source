inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Ferret");
  set_short( "Ferret" );
  set_long( "This furry little ferret nuzzles at your ankle as she tries to climb up your pants leg.  You resist the urge to pet the little ferret, knowing she is a wild animal." );

  set_gender("female");
  set_race("human");

  set_level(2);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 10);
  set_skill("combat/defense", 10);
}
