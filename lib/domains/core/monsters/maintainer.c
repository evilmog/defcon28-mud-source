inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Droid Maintainer");
add_id("droid");
add_id("maintainer");
add_id("droidmaintainer");
  set_short( "Droid Maintainer" );
  set_long( "The droid maintainer may be humanoid in shape, but thats where any other similarity to humans end. Standing over 6 feet tall and made fully out of a strong silicon-steel alloy, the maintainer is a walking hulk of metal death. The strength and endurance of the maintainer allows it to work for extended hours maintaining other droids." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 100);
  set_skill("combat/defense", 100);
  set_aggressive (1);
}
