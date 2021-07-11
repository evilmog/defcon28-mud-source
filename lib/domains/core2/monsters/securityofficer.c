inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Security Officer");
add_id("security");
add_id("officer");
add_id("securityofficer");
  set_short( "Security Officer" );
  set_long( "Dressed in a light blue uniform, this security officer is responsible for maintaining the controls in the security office which you are in. A navy blue securiy cap is on his head, shielding part of his face from you. There seems to be an air of intensity around him, as if he is concentrating hard on his duty. A whiff of not-too-cheap cologne brushes pass your nose as he moves around." );

  set_gender("male");
  set_race("human");

  set_level(8);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 40);
  set_skill("combat/defense", 40);
}
