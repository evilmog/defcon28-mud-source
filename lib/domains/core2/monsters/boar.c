inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Wild Boar");
add_id("boar");
add_id("wild");
add_id("wildboar");
  set_short( "Wild Boar" );
  set_long( "This is a fat and very ugly wild boar. It has tusks that look fairly dangerous, but must move very slowly on its short stubby legs. It is so immensely fat that it is in fact shaped somewhat like a barrel, and it's belly almost scrapes the ground as it walks. It is warty and deserves to die for smelling so disgustingly horrible!" );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
