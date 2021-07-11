inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Security Officer Neelo");
add_id("neelo");
add_id("security");
add_id("officer");
  set_short( "Security Officer Neelo" );
  set_long( "Neelo is Director FirstFuzz Greptags personal security officer.  As head security officer of CFTC, Neelo is responsible for maintaining a responsible business atmosphere above the stock exchange. He wears a pinstripe suit with a fancy hat." );

  set_gender("male");
  set_race("human");

  set_level(14);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 70);
  set_skill("combat/defense", 70);
}
