inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Cockroach");
  set_short( "Cockroach" );
  set_long( "Smelly and small, this thing is running around the sewers, spreading its own brand of germs and viruses around. Compared to the amount of germs around here, it isn't doing much but then again, it's vermin. It should be killed. " );

  set_gender("male");
  set_race("cockroach");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
