inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Green Water Snake");
add_id("green");
add_id("snake");
add_id("watersnake");
add_id("greenwatersnake");
  set_short( "Green water snake" );
  set_long( "The thin form just below the surface of the waters is a water snake. Its green skin camouflages it well under the murky sewer waters. Though not poisonous like its sea counterparts back on Earth, it might prove a danger if provoked. " );

  set_gender("female");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
