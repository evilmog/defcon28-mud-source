inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Officer");
add_id("officer");
  set_short( "A Complaint Officer" );
  set_long( "Suspicious eyes look at you as you size up the Complaint Officer. This Vaurgch has been stationed here in case any of the people making complaints get too overenthusiastic. He doesn't talk at all. In fact, all he does is stand here. But cause too much trouble at this department and you can be guaranteed of a severe reprimand from this Complaint Officer." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
