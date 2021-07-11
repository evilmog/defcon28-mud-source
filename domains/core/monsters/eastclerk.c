inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("clerk");
add_id("clerk");
  set_short( "clerk" );
  set_long( "This is a clerk who is working in the East dome. Rest is of no repose here, for work is neverending, and the assignments just pile up without any reprieve. You wonder how long more this clerk will live before a high blood pressure brings about death. " );

  set_gender("neuter");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
