inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Reactor Engineer");
add_id("reactor");
add_id("engineer");
add_id("rectorengineer");
  set_short( "Reactor Engineer" );
  set_long( "A tall lanky man with a big nose and horn-rimmed spectacles, this 25-year-old was just fresh out of the university when The Company hooked him to help maintain REACTOR ONE. These days, he spends most of his time doing his work in silence, silently regretting his decision not to have hopped on board a shuttle and go explore the stars when he was much younger." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
