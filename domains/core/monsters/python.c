inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Fierce Python");
add_id("fierce");
add_id("python");
add_id("fiercepython");
  set_short( "Fierce Python" );
  set_long( "This is a very long and heavy built python, which is wrapped around a tree, it's head waving in the air before you. It's slit pupiled eyes look at you with a cold stare and its forked tongue flits in and out of its mouth in a constant rapid flicker." );

  set_gender("maleo");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
