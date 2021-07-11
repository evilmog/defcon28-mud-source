inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Pottles the gerbil");
add_id("pottles");
add_id("gerbil");
  set_short( "Pottles the gerbil" );
  set_long( "A small light brown furry gerbil. He has a white tummy, and very sharp claws. He is very cute, and quite friendly but scared of strangers. He will probably run from you if you come near him." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
