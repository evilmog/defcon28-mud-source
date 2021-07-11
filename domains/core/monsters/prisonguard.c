inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Detention Center Guard");
add_id("detention");
add_id("center");
add_id("guard");
  set_short( "Detention Center Guards" );
  set_long( "These are massively huge vaurgch, larger than any seen working the mines in the CITY.  Carrying standard tranq pistols, they stand almost like statues, starting straight ahead and watching for trouble. Detention Center Guard has no missing limbs. " );

  set_gender("male");
  set_race("human");

  set_level(10);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 50);
  set_skill("combat/defense", 50);
}
