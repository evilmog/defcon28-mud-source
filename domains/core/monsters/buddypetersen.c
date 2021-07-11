inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Buddy Pettersen");
add_id("buddy");
add_id("petersen");
add_id("buddypetersen");
  set_short( "Buddy Petersen" );
  set_long( "Dwarfed behind the reception table is a mousy-looking man who introduces himself as Buddy Petersen, the receptionist here at REACTOR ONE. You notice that his large plastic-rimmed spectacles are way too large for his face. Not to mention his over-sized Mickey Mouse tie, his gigantic long-sleeved shirt and his bulky wristwatch. He's so timid-looking, you can't help but wonder how Buddy managed to become the receptionist here." );

  set_gender("male");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
