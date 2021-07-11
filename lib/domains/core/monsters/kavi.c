inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Payment Clerk");
add_id("kavi");
add_id("payment clerk");
add_id("payment");
  set_short( "Kavi, Payment Clerk" );
  set_long( "Constantly under the watchful eyes of Company inspectors, this poor human has been turned into an extreme submissive. She never speaks, doesn't look at anyone at all and when spoken to will hardly answer. There's the look of a trapped animal in her eyes, the sign of someone who lives in constant fear of being caught making a mistake. Because of that, she pays a hundred percent attention and more to her work." );

  set_gender("female");
  set_race("human");

  set_level(7);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 100);
  set_skill("combat/defense", 100);
}
