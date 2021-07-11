inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Engineering drone");
add_id("drone");
add_id("engineering");
add_id("engineeringdrone");
  set_short( "Engineering drone" );
  set_long( "The engineering drone is an automated unit which is capable of making minor repairs to quite a number of faults in the sewers. Working on information transmitted to it from the main sewer engineering control centre, it'll analyse the problem and then set out to rectify it." );

  set_gender("neuter");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 200);
  set_skill("combat/defense", 200);
  set_aggressive (1);
}
