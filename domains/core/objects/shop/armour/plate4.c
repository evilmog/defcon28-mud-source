inherit "/std/armor";

#include "../../../domain.h"

void setup(void) {
  set_id("lead plate");
  add_id("lead");
  add_id("plate");
  add_id("armour");  add_id("lead plate");
  set_ac(4);
  set_value(3200);
  set_size(4);
  set_weight(40);
  set_slot("torso");
  set_short("A lead plate");
  set_long("A lead plate");
}
