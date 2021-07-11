inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Dancer");
add_id("dancer");
  set_short( "Dancer" );
  set_long( "This dancer looks like she's strung out on a combination of adrenaline, dopamine and possibly vampire blood. She's wearing a skin tight dress and appears to be enjoying the music." );

  set_gender("female");
  set_race("human");

  set_level(7);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 35);
  set_skill("combat/defense", 35);
}
