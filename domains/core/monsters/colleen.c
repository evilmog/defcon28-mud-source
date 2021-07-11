inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Trade Manager Colleen");
add_id("colleen");
add_id("trade");
add_id("manager");
  set_short( "Trade Manager Colleen" );
  set_long( "Colleen Noah is the trade manager of LT Smith.  Colleen has been the trade manager here since the company's beginnings in 2646.  She can be most accurately be described as average.  Nothing about her strikes you as being particuarly bad, good, or interesting." );

  set_gender("female");
  set_race("human");

  set_level(14);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 70);
  set_skill("combat/defense", 70);
}
