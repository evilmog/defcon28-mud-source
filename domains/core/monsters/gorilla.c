inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Big Moma Gorilla");
add_id("gorilla");
add_id("moma");
add_id("big");
  set_short( "Big Moma Gorilla" );
  set_long( "Big Moma must weigh more than a metric tonne, she is very very big, and very very angry. She looks like she could take your weapon and shove it right up emm, yeah. Do NOT attack Big Moma unless you consider yourself as hard as nails.! Walk very carefully, so you don't disturb her, and just don't get her any more pissed off than absolutely necessary!" );

  set_gender("female");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
