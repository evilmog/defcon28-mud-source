inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Repair Droid");
add_id("repair");
add_id("droid");
add_id("repairdroid");
  set_short( "Repair Droid" );
  set_long( "Whirs and clicks greet your ears as you move nearer to the repair droid for a better look. The black shiny surface of the mechanical creature is bristling with various steel appendages, mostly outfitted repair equipment. There doesn't seem to be any visual devices by which the droid can see, but it does appear that it is more than capable of finding its way around and repairing damaged stuff." );

  set_gender("neuter");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
