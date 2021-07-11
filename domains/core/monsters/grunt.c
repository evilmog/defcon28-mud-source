inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Enforcement Grunt");
add_id("grunt");
add_id("enforcement");
add_id("enforcementgrunt");
  set_short( "Enforcement grunt" );
  set_long( "This evil-looking vaurgch is one of Enforcements muscles, the brawn which is sent in to deter would-be criminals from carrying out their crimes. The grunt wears a tight-fitting blue uniform with intermittent stripes of yellow. A few red specks, looking suspiciously like blood, adorns the front of the uniform. At the moment, this grunt is stationed here to guard the area and to prevent anymore incidents from happening. Enforcement grunt has no missing limbs." );

  set_gender("male");
  set_race("human");

  set_level(14);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 70);
  set_skill("combat/defense", 70);
}
