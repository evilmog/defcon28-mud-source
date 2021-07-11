inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Manipulator Drone");
add_id("drone");
add_id("manipulator");
add_id("manipulatordrone");
  set_short( "manipulator drone" );
  set_long( "This drone was created for one single purpose : to manipulate the many controls which in turn manipulate the rods which are placed in the reactor to control the reaction inside. Many manipulator claws can be seen jutting out from the main body of the drone. A retractable vise has been outfitted onto the drone to extend its range of reach. This drone has hovering capabilities courtesy of a hover engine." );

  set_gender("neuter");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
