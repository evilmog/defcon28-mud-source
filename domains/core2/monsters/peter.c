inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Peter");
add_id("peter");
add_id("manager");
add_id("financemanager");
  set_short( "Peter the finance manager" );
  set_long( "This is Peter the finance manager, he is a tall human wearing black slacks a white button up shirt, and a black tie.  He has thick muscled tattood arms." );

  set_gender("male");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
