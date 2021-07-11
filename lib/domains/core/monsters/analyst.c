inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Enforcement analyst");
add_id("analyst");
add_id("enforcement");
add_id("enforcementanalyst");
  set_short( "Enforcement analyst" );
  set_long( "The enforcement analyst is a one of the special taskforces set up by Enforcement for cases which require detective work and brainpower. Her main job would be to visit the scene of the crime and investigate the entire place thoroughly for clues. She is wearing the typical blue Enforcement uniform with a yellow patch on her left shoulder indicating that she belongs to the analysis team." );

  set_gender("female");
  set_race("human");

  set_level(8);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 40);
  set_skill("combat/defense", 40);
}
