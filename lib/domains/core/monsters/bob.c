inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Bob");
add_id("bob");
add_id("worker");
add_id("office");
add_id("officeworker");
  set_short( "Bob the office worker" );
  set_long( "This is an angry office worker, he is wearing torn slacks and a dirty button up shirt. He appears to be extremely busy." );

  set_gender("male");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
