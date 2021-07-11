inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Bouncer");
add_id("club");
add_id("bouncer");
add_id("clubbouncer");
add_id("club bouncer");
  set_short( "Club Bouncer" );
  set_long( "This is a well built member this clubs elite security team. They appear to be wearing a dark suit and sunglasses." );

  set_gender("other");
  set_race("human");

  set_level(20);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 200);
  set_skill("combat/defense", 200);
  set_aggressive (1);
}
