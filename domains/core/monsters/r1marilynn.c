inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("marilynn");
add_id("marilynn");
add_id("chief");
add_id("radiologist");
add_id("chiefradiologist");
  set_short( "Marilynn the Chief Radiologist" );
  set_long( "Short and stocky, Marilynn is your typical bitch. As the chief radiologist, she drives her poor underlings to extreme ends in her one-track crusade to keep REACTOR ONE running perfectly. A human female in her thirties, she is the ultimate incarnation of extreme bad temper." );

  set_gender("female");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
