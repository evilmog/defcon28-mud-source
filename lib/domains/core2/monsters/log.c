inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Alligator");
add_id("alligator");
add_id("log");
  set_short( "log floating in the sewer waters" );
  set_long( "This appears to be an alligator which has sated its hunger on the other poor unfortunate residents of the sewers. Now it is asleep, no doubt to awaken again later when it's hungry. You sure don't want to be here when that happens." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
