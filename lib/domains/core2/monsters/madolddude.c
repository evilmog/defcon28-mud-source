inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("TownCrier");
add_id("crier");
add_id("mad");
  set_short( "The Mad Town Crier" );
  set_long( "Nobody knows where this strange man has come from, but everyone is certain that they'd like him to leave. He stands in the center of the transit station yelling statements at random. Still, he isn't breaking any station laws, maybe it wouldn't hurt to listen to him?" );

  set_gender("male");
  set_race("human");

  set_level(1);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 5);
  set_skill("combat/defense", 5);
}
