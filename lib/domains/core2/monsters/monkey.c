inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Cuddly Monkey");
add_id("monkey");
add_id("cuddly");
add_id("cuddlymonkey");
  set_short( "Cuddly Monkey" );
  set_long( "This little monkey is extremely cute and fluffy, with soft brown fur and a lovely little cute face. It looks up at you with an expression of trusting innocence and snikkers softly. All in all, it looks like it could just use a cuddle." );

  set_gender("male");
  set_race("human");

  set_level(2);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 10);
  set_skill("combat/defense", 10);
}
