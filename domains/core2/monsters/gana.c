inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Trade Manager Gana");
add_id("gana");
add_id("manager");
add_id("trade");
  set_short( "Trade Manager Gana" );
  set_long( "Gana Lou is the trade manager of Milkitrade.  She has blond hair and bright blue eyes.  She wears a light blue beret on top of her head, accenting her similarly colored dress." );

  set_gender("female");
  set_race("human");

  set_level(14);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 70);
  set_skill("combat/defense", 70);
}
