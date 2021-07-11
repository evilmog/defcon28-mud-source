inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("serviceman");
add_id("service");
add_id("man");
add_id("serviceman");
  set_short( "serviceman" );
  set_long( "This is a serviceman, one of the specialized personnel in charge of maintaining the overall integrity of the reactor's hull. He has been hired to work instead of delegating the job to droids because Kattilyn doesn't have enough faith in automated drones to carry out such a sensitive task." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
