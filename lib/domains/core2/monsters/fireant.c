inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Fire Ant");
add_id("fire");
add_id("ant");
  set_short( "Fire Ant" );
  set_long( "This little fire ant looks deceptively harmless.  In truth, this is a hybrid fire ant bred from strains of African fire ants for their high toxicity.  This is not someone to invite to the picnic." );

  set_gender("male");
  set_race("human");

  set_level(2);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 10);
  set_skill("combat/defense", 10);
}
