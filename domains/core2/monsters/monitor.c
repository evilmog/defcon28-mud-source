inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Dozing Monitor Lizard");
add_id("monitor");
add_id("lizard");
add_id("monitorlizard");
  set_short( "Dozing monitor lizard" );
  set_long( "Normally a highly-efficient and fast predator, this monitor lizard appears to be dozing away. Its dark shiny skin is glistening, but you're not even inclined to test and feel the texture of its body. Monitor lizard has no missing limbs." );

  set_gender("male");
  set_race("human");

  set_level(2);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 10);
  set_skill("combat/defense", 10);
}
