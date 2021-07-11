inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Zombie");
add_id("zombie");
  set_short( "Zombie" );
  set_long( "This is a garden variety run of the mill zombie, wants to eat your brains....nom" );

  set_gender("bofh");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
