inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Zombie");
add_id("zombie");
add_id("slow");
add_id("slowzombie");
add_id("slow zombie");
  set_short( "Slow Zombie" );
  set_long( "This is a blood thirsty zombie, evil mog is lazy and isn't going to describe it, its slow and its going to eat you" );

  set_gender("bofh");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
