inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Tawny");
add_id("tawny");
add_id("secretary");
  set_short( "Miss Tawny, Greys secretary" );
  set_long( "This is the beautiful Miss Tawny, whom Grey had transferred here all the way from Earth.  She is a well endowed blonde of Nordic descent who does her job efficiently.  She has many talents, many of which, it is rumoured, Grey has experienced first hand.  As scarce as women are on Core, the gentlemen can rest assured that Miss Tawny has no monogamous hang ups." );

  set_gender("female");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
