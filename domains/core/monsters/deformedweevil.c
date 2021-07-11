inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("deformed weevil");
add_id("deformed");
add_id("weevil");
add_id("deformedweevil");
  set_short( "Deformed Weevil" );
  set_long( "This is an abnormaly deformed weevil. It's claws are dark black, blue, and green.  It's face has only one eye. It's skin is rough and strong, like armour.  It appears to be looking around the room  for food.  You see a brand with a name on it, 'Scrill'.  Atleast, that's all you can make of it. The legs of this deformed beast are large, making it able to travel more quickly than it's smaller kin." );

  set_gender("neuter");
  set_race("weevil");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
