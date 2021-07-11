inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("radiologist");
add_id("radio");
add_id("radiologist");
  set_short( "radiologist" );
  set_long( "Wholly obsessed with her job, this radiologist is just one of many who were hired by Kattilyn to first set up and then maintain the reactor. Her job mainly is to get regular readings of the radiation level within the reactor. In the event of a leak, she will be one of the very first personnel at the frontline fixing the leak." );

  set_gender("female");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
