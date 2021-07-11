inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Guard");
  set_short( "Mine Guard" );
  set_long( "The burly guard has been stationed here to make sure that nobody steals the valuable ore in the mine." );

  set_gender("male");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
