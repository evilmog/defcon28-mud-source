inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("small weevil");
add_id("small");
add_id("weevil");
  set_short( "small weevil" );
  set_long( "A small little weevil scurries about, eating rice crumbs. Its small little feet are dragging a trail of sticky slime around." );

  set_gender("neuter");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
