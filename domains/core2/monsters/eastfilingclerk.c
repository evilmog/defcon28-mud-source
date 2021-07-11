inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("filing clerk");
add_id("clerk");
add_id("filing");
add_id("filingclerk");
add_id("filing clerk");
  set_short( "filing clerk" );
  set_long( "This bored-looking teenager is a filing clerk. Her purpose is to file away unneeded files and retrieve required ones. Not a permanent worker, she is just passing time here and is therefore not putting full effort into what she is doing." );

  set_gender("female");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
