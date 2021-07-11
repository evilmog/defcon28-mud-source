inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Alexis");
add_id("alexis");
add_id("receptionist");
  set_short( "Alexis, East dome receptionist" );
  set_long( "Dressed in a pretty white dress, Alexis is the receptionist of the East dome. She handles most of the incoming inhabitants to the dome, as well as greets the current inhabitants as they return home from their work. She is a sweet little thing, and it's no wonder that she was selected to be a receptionist here." );

  set_gender("female");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
