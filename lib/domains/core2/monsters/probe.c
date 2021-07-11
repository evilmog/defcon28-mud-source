inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Sewer Probe");
add_id("probe");
add_id("sewerprobe");
add_id("sewer");
  set_short( "Sewer probe" );
  set_long( "This is a sewer probe, a robot designed especially to help sewer engineers maintain the sewers in good condition. Its main duty is to go around the sewers and send back recorded information of any faults to the main control room of the sewer engineers. It is able to access any place in the sewers, considering the fact that it moves around on a hover unit. Sewer probe has no missing limbs. " );

  set_gender("neuter");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
