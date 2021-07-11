inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Vampire");
add_id("vampire");
  set_short( "Vampire" );
  set_long( "This looks like your typical south park goth kid vampire, sparkly light twilight with none of the cool goth like features. Appears to be drinking tomato juice, but it could be blood, but then again it could be tomato juice." );

  set_gender("other");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
