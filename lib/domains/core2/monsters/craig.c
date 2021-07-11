inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Craig");
add_id("craig");
add_id("office");
add_id("manager");
add_id("officemanager");
  set_short( "Craig the office manager" );
  set_long( "He appears to be a tall human, he is dressed in black slacks and a white button up shirt.  He looks muscled and angry." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
