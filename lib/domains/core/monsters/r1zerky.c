inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Zerky Berkles");
add_id("zerky");
add_id("berkles");
add_id("chief");
add_id("maintenance");
add_id("maintenancechief");
add_id("zerkyberkles");
  set_short( "Zerky Berkles, Maintenance Chief" );
  set_long( "This man is Zerky Berkles, maintenance chief. He has worked his way up from a mere serviceman servicing the many parts of the Prison dome to where he is now. You look at him and see not the tall thin man with the beaky nose and jutted chin but someone who is more than capable to rise to the top of anything he is in." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
