inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Dancer");
add_id("cage");
add_id("dancer");
add_id("cagedancer");
  set_short( "Cage Dancer" );
  set_long( "The dancer's long wavey red hair hangs down to almost her waist, swinging as she dances.  Her outfit clearly shows her muscular body, which she must have worked hard to get and keep.  She winks at you with her green eyes, noticing your admiration." );

  set_gender("female");
  set_race("human");

  set_level(10);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 50);
  set_skill("combat/defense", 50);
}
