inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Torga");
add_id("torga");
add_id("plumbing");
add_id("liason");
add_id("plumbingliason");
  set_short( "Torga, Plumbing Liaison" );
  set_long( "This huge, hulking specimen of a vaurgch is the North Domes plumbing liaison. Even from where you are standing, you can actually smell him. There is a dirty look about Torga, and you note that the streaks of black dirt on his skin have most probably been there for about a week or so. Being the one who handles all of the North Dome's residents plumbing problems, Torga spends a lot of time in the sewerage. And you can also smell that fact out." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
