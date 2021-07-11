inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Reactor Tech");
add_id("tech");
add_id("reactor");
add_id("reactortech");
  set_short( "Reactor Tech" );
  set_long( "Clad in simple white and yellow coveralls, this Artris reactor tech is just one of the many technicians whose daily duty is to oversee the well-being of the immense fusion generator. With his four arms, this tech is able to complete most jobs in half the time it takes other two-armed races to finish them. However, although highly trained in technical skills and in possession of great accuracy, the tech is relatively introverted and is a bit on the quiet side." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
