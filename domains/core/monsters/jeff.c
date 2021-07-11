inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Jeff");
add_id("worker");
add_id("jeff");
add_id("officeworker");
  set_short( "Jeff the office worker" );
  set_long( "This is an average office worker, he is dressed in black slacks and a white button up shirt." );

  set_gender("male");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
