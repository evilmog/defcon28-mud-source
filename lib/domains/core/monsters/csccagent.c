inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("CSCC Agent");
add_id("cscc");
add_id("agent");
  set_short( "CSCC agent" );
  set_long( "This is a CSCC agent, he is in top notch shape.  Loaded with tons of weapons fron head to toe.  Battle knives are in his boots, two swords over his shoulder.  Guns along his belt, and brass knuckles on each hand.  He looks around the room for anything suspicious." );

  set_gender("male");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
