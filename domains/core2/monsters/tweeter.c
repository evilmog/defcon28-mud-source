inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Vice President Tweeter");
add_id("tweeter");
add_id("vp");
  set_short( "Vice President Tweeter" );
  set_long( "Vice President Tweeter has been assigned to the Core Branch of Galactic Securities.  Although GSec doesn't do a lot of business on Core, Tweeter doesn't see that as a bad thing.  The higher-ups in the company don't expect anything from this little outpost, so Tweeter gets to lounge around." );

  set_gender("male");
  set_race("human");

  set_level(14);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 70);
  set_skill("combat/defense", 70);
}
