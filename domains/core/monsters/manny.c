inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Manny");
add_id("manny");
  set_short( "Manny, the Director of Colony Ethics" );
  set_long( "In an ironic twist of fate, Manny landed this job just after being released from prison on embezzlement charges back on Earth.  He applied for the job not thinking he would be awarded it, however his background check information got lost and the next starship to Core was leaving the next day, and well, here he is now.  He really has tried to perform his job well and no one at The Company has ever suspected his shady background." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
