inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Receptionist Collette");
add_id("collette");
add_id("receptionist");
  set_short( "Receptionist Collette" );
  set_long( "Collette is very ugly.  Diana must not want any competition for the title of hottest chick on Core. Frizzled hair and acne plague this poor woman that probably grew up in the mines on a distant planet." );

  set_gender("female");
  set_race("human");

  set_level(14);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 70);
  set_skill("combat/defense", 70);
}
