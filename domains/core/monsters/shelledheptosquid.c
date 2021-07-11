inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Shelled heptosquid");
add_id("heptopsquid");
add_id("shelledheptosquid");
add_id("squid");
  set_short( "Shelled heptosquid" );
  set_long( "Large bulbous eyes peer at you from the surface of the murky waters. A long carapaced form, whitish in color, slides through the water before you can get a good glimpse of what it is. The sensation of a lot of tentacles sweeping against your feet under the sewer waters makes your skin crawl. Maybe you should get out of the water. Fast. " );

  set_gender("neuter");
  set_race("human");

  set_level(2);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 100);
  set_skill("combat/defense", 100);
  set_aggressive (1);
}
