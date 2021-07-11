inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("John");
add_id("john");
add_id("worker");
add_id("office");
add_id("officeworker");
  set_short( "John the office worker" );
  set_long( "This is an average office worker, he is wearing slacks and a button up shirt.  He appears to look very busy." );

  set_gender("male");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
