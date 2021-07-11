inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("rad goo");
add_id("rad");
add_id("goo");
add_id("radgoo");
  set_short( "rad goo" );
  set_long( "This formless blob of white milky-looking substance is sticking all over the room. It doesn't seem to have an eye at all, but yet you can see it slowly moving all over the place with a definite certainty in direction. Occasionally, it makes a squelching sound as it shifts its mass from one area to another." );

  set_gender("neuter");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
