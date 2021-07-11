inherit "/std/vendor";

#include "../domain.h"

void setup(void) {
  set_name("Autobot");
  set_short( "Autobot" );
  set_long( "This is a robot arm, it looks like it has seen some better days. It is attached to the ceiling. It might be leaking hyradulic fluid." );

  set_gender("other");
  set_race("robot");

  set_level(40);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 200);
  set_skill("combat/defense", 200);
  set_restock_delay(600);
  set_will_buy(0);
  add_item(DIR + "/objects/shop/beer/white", 100);
  add_item(DIR + "/objects/shop/beer/yellow", 100);
  add_item(DIR + "/objects/shop/beer/orange", 100);
  add_item(DIR + "/objects/shop/beer/red", 100);
  add_item(DIR + "/objects/shop/beer/blue", 100);
  add_item(DIR + "/objects/shop/beer/purple", 100);
}
