inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Rick");
add_id("rick");
add_id("financial");
add_id("planner");
add_id("financialplanner");
  set_short( "Rick the financial planner" );
  set_long( "Why the fuck is Rick here in a labcoat doing financial planning. Since when does rick know and or care about money, unless he wants corezite so he can get back to C-137, or maybe its the wrong rick.  Nobody Cares either way." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 100);
  set_skill("combat/defense", 100);
}
