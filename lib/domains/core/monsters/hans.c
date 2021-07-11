inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Hans");
add_id("hans");
  set_short( "Hans, the Director of Employee Affairs" );
  set_long("Hans is a boring looking employee, they look like the life has been sucked out of them. They may have been a bad HR employee in the past but they went through mandatory chemical re-education which appears to have sapped their will to live. They are sitting at their desk blank and emotionless.");

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 100);
  set_skill("combat/defense", 100);
}
