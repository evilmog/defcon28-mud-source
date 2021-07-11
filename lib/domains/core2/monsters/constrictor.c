inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Sewer Constrictor");
add_id("sewer");
add_id("constrictor");
add_id("sewerconstrictor");
  set_short( "Sewer constrictor" );
  set_long( "Beady eyes look at you as the sewer constrictor slowly unfolds its long body from somewhere in the water under you. It is hungry, but it's not about to attack you. Yet. " );

  set_gender("male");
  set_race("human");

  set_level(2);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 10);
  set_skill("combat/defense", 10);
}
