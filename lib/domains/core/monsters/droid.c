inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Enforcement Droid");
add_id("droid");
add_id("enforcement");
add_id("enforcementdroid");
  set_short( "Enforcement droid" );
  set_long( "The enforcer droid is a thin, reedy-looking mechanical humanoid. It is not hard to dismiss it as the weakest of all the Core Enforcement robots, for its steel frame is nearly skeletal and there doesn't seem to be any form of strength about it. Most enforcer droids are given relatively mundane tasks, which range from preventing unauthorized personnel from entering restricted areas to sentry duty." );

  set_gender("neuter");
  set_race("human");

  set_level(8);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 100);
  set_skill("combat/defense", 100);
  set_aggressive (1);
}
