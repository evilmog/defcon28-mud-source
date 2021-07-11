inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Brian");
add_id("brian");
add_id("analyst");
add_id("stock");
add_id("stockanalst");
  set_short( "Brian the stock analyst" );
  set_long( "This is Brian, he is wearing blue slacks, a white button up shirt and a blue tie.  His neck and arms appear to be tattood." );

  set_gender("male");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
