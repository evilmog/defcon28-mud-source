inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Iguana");
add_id("iguana");
  set_short( "Iguana" );
  set_long( "This scaly iguana suns herself on a rock.  She looks rather intimidating, but is really not an aggressive creature; she mostly eats insects." );

  set_gender("female");
  set_race("human");

  set_level(2);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 10);
  set_skill("combat/defense", 10);
}
