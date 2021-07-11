inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("North Dome Guard");
add_id("north");
add_id("dome");
add_id("guard");
add_id("northdome");
add_id("domeguard");
add_id("northdomeguard");
  set_short( "North Dome Guard" );
  set_long( "Tall and well-built, this armored man is one of the elite guards who have been assigned to enforce the Companys rules in the Northern housing dome. The green armor embedded into his clothes provides the guard a good measure of protection, and the visor which protects his face hides his expression from you. All you see is a stern-lipped mouth bordering on a sneer. Keep out of trouble, and this imposing figure will not take any notice of you." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
