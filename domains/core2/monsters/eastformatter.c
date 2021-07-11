inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("formatter");
add_id("formatter");
  set_short( "formatter" );
  set_long( "This gorbu formatter looks sleepy, a result of having to guide the formatting of the documents via the computer for hours without end. You can see that she would rather be somewhere else, like maybe soaking in a nice cool pool of water underneath a hot sun. Unfortunately, there is still much work to be done before that can become a reality. " );

  set_gender("female");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
