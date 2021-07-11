inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Mine Guard Captain");
add_id("mine");
add_id("guard");
add_id("captain");
add_id("mineguard");
add_id("mineguardcaptain");
add_id("guardcaptain");
  set_short( "Mine Guard Captain" );
  set_long( "The Captain gives you a don't mess with me look and then casually gestures for you to move along.  His feline legs look very powerful, probably from spending many years stationed at The Companys branch office on the Blit homeworld before being re-stationed to Core." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
