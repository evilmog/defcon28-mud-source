inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Sewer Engineer Salik");
add_id("salik");
add_id("sewer");
add_id("engineer");
  set_short( "Sewer Engineer Salik" );
  set_long( "Clad in a non-descript green and blue sewer maintenance uniform is a thin abernon sewer engineer. You notice from his nametag that his name is Salik, and realize that he must be here to take a look at some of the documents left in this place. His hideous face does not even betray the slightest notice of your presence when you entered. You conclude that he must either be very busy or very arrogant. " );

  set_gender("male");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
