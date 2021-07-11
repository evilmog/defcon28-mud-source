inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Planner");
add_id("planner");
  set_short( "Planner" );
  set_long( "Eyes creased in concentration, the planner is a specially-elected individual from the various East dome departments to help plan out general dome policy outlines and other such matters. He is always deep in thought, mentally going through the plans for the East dome over and over again in his mind. Do not disturb his mental train of thought." );

  set_gender("male");
  set_race("human");

  set_level(8);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 40);
  set_skill("combat/defense", 40);
}
