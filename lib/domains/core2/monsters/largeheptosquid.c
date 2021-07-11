inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Heptosquid");
add_id("squid");
add_id("heptopsquid");
  set_short( "Heptosquid" );
  set_long( "Little can be seen of the heptosquid, what with the dark murky waters and its soft near transparent body. All you know is that you can see a number of tentacles flailing around its 2-meter long body. You don't want to go anywhere near this thing. " );

  set_gender("neuter");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
