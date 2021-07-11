inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("weevil");
add_id("weevil");
  set_short( "Weevil" );
  set_long( "This is an abnormal size weevil. It's legs have yellow and green colored claws. Slime drools from it's mouth. This particular weevil almost looks like it has some kind of brand on it's back, but it moves around too quickly for you to get a clear view.  Something is wrong about this creature. " );

  set_gender("neuter");
  set_race("human");

  set_level(2);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 10);
  set_skill("combat/defense", 10);
}
