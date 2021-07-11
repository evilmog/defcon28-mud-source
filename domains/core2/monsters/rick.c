inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Rick");
add_id("rick");
add_id("financial");
add_id("planner");
add_id("financialplanner");
  set_short( "Rick the financial planner" );
  set_long( "This is rick, he is a financial planner, he is dressed in black slacks and a white button up shirt. Various tattoos can be seen on his thick muscled arms." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
