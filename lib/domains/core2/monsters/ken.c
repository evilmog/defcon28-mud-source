inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Ken");
add_id("ken");
add_id("analyst");
add_id("stock");
add_id("stockanalst");
  set_short( "Ken the stock analyst" );
  set_long( "This is Ken, he is a stock analyst.  He looks to be wearing blue slacks and a white button up shirt.  His arms appear to be tattood." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
