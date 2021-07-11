inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Rat Queen");
add_id("rat");
add_id("queen");
add_id("ratqueen");
  set_short( "Rat queen" );
  set_long( "The biggest of the big and the baddest of the bad, this atrium rat outranks, outsizes and out-stinks them all.  She moves around the lab slowly -- likely because she's pregnant with another litter of her vile spawn (ugh, AGAIN!).  Her fangs and claws look sharp, however, and it appears she knows how to use her size and weight to her advantage in combat." );

  set_gender("female");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
