inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Payroll investigator");
add_id("eric");
add_id("payroll investigator");
add_id("payroll");
  set_short( "Eric Douly, Payroll investigator" );
  set_long( "A skinny little guy, with greasy hair and a small beard. He looks to have worked himself to death, or that he just doesn't care about his job. He is known for having found slackers in the company by checking the payroll reports. His uniform looks worn down and dirty as if he hasn't showered in days, if not weeks.  He grins at you and wonders if you'll ever be asking about the slackers he's found lately. " );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
