inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Lil");
add_id("lil");
add_id("receptionist");
  set_short( "Lil the North Dome Receptionist" );
  set_long( "Lil is a lithe-looking nympho. Dressed in a plain-looking blouse which incidentally more than enhances her near-perfect figure, you notice that she is looking at you demurely through oval-shaped eyes. Shes the perfect nympho, put here to greet those who wish to live in this dome. For the majority of the males which work on Core, there is nothing sweeter than to be greeted by a pretty face at the end of a long day." );

  set_gender("female");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
