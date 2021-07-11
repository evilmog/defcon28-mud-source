inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Japanese Beetle");
add_id("japanese");
add_id("beetle");
  set_short( "Japanese beetle" );
  set_long( "This large japanese beetle scurries about eating other, smaller insects. These beetles are an important part of the food chain here in Shay Park, eating smaller, harmful insects, while itself being eaten by the birds and lizards." );

  set_gender("female");
  set_race("beetle");

  set_level(1);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 100);
  set_skill("combat/defense", 5);
}
