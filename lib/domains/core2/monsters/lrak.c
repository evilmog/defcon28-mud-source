inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Lrak");
  set_short( "Mine Recruiter Lrak" );
  set_long( "A medium height human male in his mid-20s with sandy brown hair, Lrak looks quite at ease in his Company-issued uniform.  His touch padd, however, is another matter.  He clutches it as if his very life depends on it (which it does, whenever the mining quotas are reviewed)." );

  set_gender("male");
  set_race("human");

  set_level(1);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 5);
  set_skill("combat/defense", 5);
}
