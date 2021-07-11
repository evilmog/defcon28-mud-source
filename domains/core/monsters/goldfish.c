inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Goldfish");
  add_id("goldfish");
  set_short( "Goldfish" );
  set_long("This is a shitty gold fish, somehow its breathing in air, nevermind the fact that its floating, evilmog must have been drunk when he willed it into being, nobody cares get used to it.");
  set_gender("male");
  set_race("goldfish");

  set_level(16);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 100);
  set_skill("combat/defense", 100);
set_aggressive (1);
}
