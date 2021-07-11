inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Von Newman");
add_id("von");
add_id("newman");
add_id("registrar");
add_id("vonnewman");
  set_short( "Von Newman, East dome registrar" );
  set_long( "An strange piercing aura surrounds the East dome registrar. You get the feeling that there is something very weird about him, but can't seem to figure out what. Perhaps it's the feeling that you're both not alone in this room. Or maybe it's the fact that you feel his eyes constantly on you although he's not looking at you. Whatever the case, this man gives you the creeps. " );

  set_gender("male");
  set_race("human");

  set_level(2);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 10);
  set_skill("combat/defense", 10);
}
