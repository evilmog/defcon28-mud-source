inherit "/std/vendor";

#include "../domain.h"

void setup(void) {
  set_name("Autobot");
add_id("auto");
add_id("bot");
add_id("autobot");
  set_short( "Autobot" );
  set_long( "This is a robot arm, it looks like it has seen some better days. It is attached to the ceiling. It might be leaking hyradulic fluid." );

  set_restock_delay(600);
  set_will_buy(0);

  set_gender("other");
  set_race("robot");

  set_level(40);

  add_item(DIR + "/objects/pass", 10);
  add_item(DIR + "/objects/goldpass", 10);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 100);
  set_skill("combat/defense", 100);
}
