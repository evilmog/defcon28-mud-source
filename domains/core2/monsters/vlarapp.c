inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Vlarapp");
add_id("vlarapp");
  set_short( "Vlarapp, East dome manager" );
  set_long( "Clothed in a blue uniform, this overweight abernon is the dome manager of the East dome. Vlarapp, like all abernons, bears a deeply ingrained hatred for all the other races. But his abilities in management are beyond compare, and so the Company made him manager of the dome. Although he might seem a little grouchy at all times, Vlarapp can actually be a pretty decent abernon if you catch him at the right time. However, he is a tidiness freak, so try not to approach him unless you are currently being immaculately tidy." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
