inherit "/std/weapon";

#include "../../../domain.h"

void setup(void) {
  set_id("test");
  set_adj("Bronze");
  add_id("weapon");
  add_id("Bronze");
  add_id("Bronze test");
  set_ac(1);
  set_value(200);
  set_size(1);
  set_weight(10);
  set_slot("test");
  set_short("A Bronze test");
  set_long("A Bronze test");
}
