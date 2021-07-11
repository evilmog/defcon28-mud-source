inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Giant Fern");
add_id("giant");
add_id("fern");
add_id("giantfern");
  set_short( "Giant Fern" );
  set_long( "A huge towering plant, you notice that this native species of Earth has evolved into a more complex lifeform. Not only is it semi-sentient now, but it is also capable of defending its ownself against offensive lifeforms, a necessity in the hostile conditions of the atrium." );

  set_gender("neuter");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
