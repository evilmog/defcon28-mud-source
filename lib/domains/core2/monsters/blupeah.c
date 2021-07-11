inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Blu Peah");
add_id("blu");
add_id("blupeah");
add_id("peah");
  set_short( "Assistant System Administrator Blu Peah" );
  set_long( "Always enjoying the shadows, Blu Peah deals with all the lower level system administration tasks required by the Center. Wearing casual clothing is his MO.  However, his fashion-sense is somewhat lacking, as displayed by his pale green shirt and bright blue pants." );

  set_gender("male");
  set_race("human");

  set_level(14);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 70);
  set_skill("combat/defense", 70);
}
