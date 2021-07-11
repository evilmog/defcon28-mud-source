inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Roger Delgado");
add_id("roger");
add_id("delgado");
add_id("rogerdelgado");
  set_short( "Roger Delgado, East dome Public Relations Officer" );
  set_long( "You are looking at Roger Delgado, the public relations officer of the East dome. He is a handsome man of perhaps thirty. Dressed in an exclusive-looking suit, you can see that Roger does have a brilliant sense of dressing. A whiff of expensive cologne drifts pass you. You can see that Roger is a true gentleman." );

  set_gender("male");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
