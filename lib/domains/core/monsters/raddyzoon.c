inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("raddyzoon");
add_id("raddyzoon");
add_id("zoon");
add_id("raddy");
  set_short( "raddyzoon" );
  set_long( "The raddyzoon is a glowing blob of green ooze. It appears to be moving in many directions at the same time, although it doesn't seem to be gaining any ground in any way at all. Luminous stuff seem to move around beneath its gooey exterior, but you can't be sure what that stuff is at all." );

  set_gender("neuter");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
