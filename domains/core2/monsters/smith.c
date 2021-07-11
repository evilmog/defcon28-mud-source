inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("President Smith");
add_id("smith");
add_id("president");
  set_short( "President Smith" );
  set_long( "President Smith immediately strikes you as a powerful individual. Everything about him radiates it: his clothes, countenance, and posture. He wears an expensive looking black suit with a red tie.  The success of his company must be treating him very well." );

  set_gender("male");
  set_race("human");

  set_level(14);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 70);
  set_skill("combat/defense", 70);
}
