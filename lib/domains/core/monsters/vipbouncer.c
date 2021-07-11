inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Bouncer");
add_id("bouncer");
  set_short( "Bouncer" );
  set_long( "This appears to be one of EvilMogs private security guards. They appear to be in a black suit with dark sunglasses, a real high speed shoot to kill type." );

  set_gender("other");
  set_race("human");

  set_level(20);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 100);
  set_skill("combat/defense", 100);
}
