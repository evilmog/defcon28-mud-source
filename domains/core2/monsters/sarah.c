inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Receptionist Sarah");
add_id("sarah");
add_id("receptionist");
  set_short( "Receptionist Sarah" );
  set_long( "Sarah has seems to have grown rather large over the years.  She tends to be reading a magazine or eating something instead of helping anyone, a testament to the lack of work coming in to Galactic Securities." );

  set_gender("female");
  set_race("human");

  set_level(13);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 65);
  set_skill("combat/defense", 65);
}
