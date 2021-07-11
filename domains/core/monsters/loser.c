inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Loser");
add_id("loser");
  set_short( "Loser" );
  set_long( "This is a loser.  He is wearing a tight blue tee shirt with matching blue pants and.. hes not on the list!  So he has to wait in the long line, and seems to be getting a bit upset.  You should probably be careful, although with his scrawny figure, you might be able to take him." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
