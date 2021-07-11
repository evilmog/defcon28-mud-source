inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Lulams");
  set_short( "Customs Officer Lulams" );
  set_long( "Lulams wears a perfectly ironed Company jumpsuit.  Not a wrinkle can be seen.  His hair is sealed beneath a layer of gel half a centimeter thick, ensuring not a single strand of hair will stray from its assigned place." );

  set_gender("male");
  set_race("human");

  set_level(1);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 5);
  set_skill("combat/defense", 5);
}
