inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Receptionist Clara");
add_id("receptionist");
add_id("clara");
  set_short( "Receptionist Clara" );
  set_long( "Clara has been working as a receptionist at Milkitrade since 51.  She is not much to look at, but her tail does peak your interest.  She is wearing a light blue business suit." );

  set_gender("female");
  set_race("human");

  set_level(14);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 70);
  set_skill("combat/defense", 70);
}
