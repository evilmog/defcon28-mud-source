inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Jack Back");
add_id("jack");
add_id("back");
add_id("trader");
  set_short( "Jack Back, Trader" );
  set_long( "Jack has a look about him that makes you think he's seen a lot around here.  He wears a nice suit.  Leaning against the wall in the corner, his legs are crossed as he smokes a cigar.  A fedora is tilted to cover most of his face." );

  set_gender("male");
  set_race("human");

  set_level(14);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 70);
  set_skill("combat/defense", 70);
}
