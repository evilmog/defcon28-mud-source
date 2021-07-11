inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Radsensor");
add_id("radsensor");
add_id("rad");
add_id("sensor");
add_id("mobile");
add_id("mobileradsensor");
  set_short( "mobile radsensor" );
  set_long( "This is a mobile radsensor. It is built for the specific purpose of moving around, collecting radiation levels information and then transmitting them back to the REACTOR ONE facility." );

  set_gender("neuter");
  set_race("human");

  set_level(2);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 10);
  set_skill("combat/defense", 10);
}
