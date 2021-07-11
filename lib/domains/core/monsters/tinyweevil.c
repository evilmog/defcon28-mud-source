inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("tiny weevil");
add_id("tiny");
add_id("weevil");
  set_short( "Tiny Weevil" );
  set_long( "A tiny little weevil scurries about, eating rice crumbs. Its small little feet are dragging a trail of sticky slime around." );

  set_gender("neuter");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
