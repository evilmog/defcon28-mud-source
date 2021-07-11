inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Dome Guard");
add_id("dome");
add_id("guard");
add_id("domeguard");
  set_short( "Dome Guard" );
  set_long( "Tall and well-built, this armored man is one of the elite guards who have been assigned to enforce the Companys rules in the Northern housing dome. The green armor embedded into his clothes provides the guard a good measure of protection, and the visor which protects his face hides his expression from you. All you see is a stern-lipped mouth bordering on a sneer. Keep out of trouble, and this imposing figure won't take any notice of you. North Dome guard has no missing limbs." );

  set_gender("male");
  set_race("human");

  set_level(8);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 200);
  set_skill("combat/defense", 200);
}
