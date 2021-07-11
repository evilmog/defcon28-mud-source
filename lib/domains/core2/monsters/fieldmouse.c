inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Field Mouse");
  set_short( "Field Mouse" );
  set_long( "This little mouse squeaks happily as it hides amongst the tall grass.  These little guys have a hard life, constantly being eaten by birds, snakes, and other predators." );

  set_gender("female");
  set_race("human");

  set_level(1);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 5);
  set_skill("combat/defense", 5);
}
