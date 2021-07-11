inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Red Doe");
add_id("red");
add_id("doe");
add_id("reddoe");
  set_short( "Red Doe" );
  set_long( "This is a timid forest animal, and it looks around it nervously, ready to run away if it feels threatened. It is a soft eyed red deer, female probably, since it has no large antlers. It looks very weak, and defenceless, and you wish you could just stroke it's head and whisper to it that everything will be all right, but unfortunately, it will not." );

  set_gender("female");
  set_race("human");

  set_level(2);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 10);
  set_skill("combat/defense", 10);
}
