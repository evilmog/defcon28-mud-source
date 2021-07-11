inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("physicist");
add_id("physicist");
  set_short( "physicist" );
  set_long( "Armed with the laws of physics and nothing else, this physicist was born and bred to center his life around physics. This man worships the likes of Einstein and the nuclear bomb. If he survives his stint with the miners running around Core, he will most probably go on to achieve something like proving that the circle is a square." );

  set_gender("male");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
