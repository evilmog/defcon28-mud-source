inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Carrier Pigeon");
add_id("carrier");
add_id("pigeon");
  set_short( "Carrier Pigeon" );
  set_long( "Driven to extinction centuries ago, this bird is a feat of forensic DNA recovery and engineering.\n\nThis plump bird can be found in most of the Core parks, begging for bread scraps and seed.  These birds have made hats a popular accessory to wear when visiting the parks." );

  set_gender("male");
  set_race("pigeon");

  set_level(2);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 10);
  set_skill("combat/defense", 10);
}
