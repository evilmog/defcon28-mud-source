inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("CSCC Captain");
add_id("cscc");
add_id("captain");
  set_short( "CSCC captain" );
  set_long( "This is a CSCC captain, he wears a gold bar for his rank on his black trenchcoat, which conceals his inventory." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
