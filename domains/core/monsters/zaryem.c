inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Zaryem");
add_id("zaryem");
  set_short( "Zaryem, Maintenance officer" );
  set_long( "Zaryem smells strongly of disinfectant, a result of having have to wash up his own office after the maintenance droids suddenly left for their regularly scheduled maintenance checks. The maintenance officer is not in a very good mood at the moment, and it is highly advisable not to get on his nerves anymore than one should." );

  set_gender("male");
  set_race("human");

  set_level(8);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 40);
  set_skill("combat/defense", 40);
}
