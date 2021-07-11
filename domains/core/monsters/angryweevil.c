inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("angyry weevil");
add_id("angry");
add_id("weevil");
  set_short( "Angry Weevil" );
  set_long( "This weevil is large and angry!  I'd stay away, it's very aggressive right now!" );

  set_gender("neuter");
  set_race("weevil");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
