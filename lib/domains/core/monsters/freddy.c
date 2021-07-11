inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Freddy");
add_id("freddy");
  set_short( "Freddy, the Director of Sanitation Engineering" );
  set_long( "Freddy's title may be misleading.  He is not an engineer.  In fact, he never even graduated from high school.  Freddy secured his executive position because he was the only person who did not realize Director of Sanitation Engineering is a euphemism for garbageman.  Ignorance is bliss." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
