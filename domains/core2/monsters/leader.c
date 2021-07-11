inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Rat Leader");
add_id("rat");
add_id("leader");
add_id("ratleader");
  set_short( "Rat Leader" );
  set_long( "Large, way much larger than even the warrior rats is this black evil-looking creature. A sharp snout sniffs royally at you as it gets a scent of the lowly creature before it. This majestic rodent is the ruler of the rats in this area. Here, its royal squeak is LAW. Don't cross it." );

  set_gender("female");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
