inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Rat");
add_id("rat");
  set_short( "Rat" );
  set_long( "Dirty and smelly, this large rat is looking at you hungrily. You suddenly realize that food is hard to come by in the sewers. " );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
