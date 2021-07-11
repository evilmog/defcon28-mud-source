inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Culprit");
add_id("culprit");
add_id("mechanic");
add_id("company");
add_id("companymechanic");
  set_short( "Culprit, injured company mechanic" );
  set_long( "Culprit's legs look eaten and full of slime.  He moans and complains, apologizing that he fell asleep.  It looks as if the weevils got ahold of him.  A rather large weevil, or something else.  His eyes watering, he looks up at you and tries to talk, but looks lost.  Maybe you should try asking if he needs help. " );

  set_gender("male");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
