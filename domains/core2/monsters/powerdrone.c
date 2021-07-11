inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Power Drone");
add_id("power");
add_id("drone");
add_id("powerdrone");
  set_short( "Power Drone" );
  set_long( "Spherically shaped and painted grey in color, the power drones main purpose is to connect the power cables to the droids during the recharging process. Due to the labour-orientated nature of their work, the power drones are stronger than most of the usual droids." );

  set_gender("neuter");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
