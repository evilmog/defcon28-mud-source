inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Atrium Rat");
add_id("atrium");
add_id("rat");
add_id("atriumrat");
  set_short( "Atrium rat" );
  set_long( "A failed scientific experiment, this rodent might have originally been intended to be placed within the miniature ecosystem of Shay Park. The creature has a fatal flaw that caused its development program to be scrapped: IT REEKS.  The smell is so bad it would've driven away any and all visitors to the atrium complex.  How it managed to survive and take over the engineering lab is anybody's guess." );

  set_gender("rat");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
