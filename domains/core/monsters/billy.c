inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Billy");
add_id("billy");
  set_short( "Billy, Director of the Office of Environmental Quality" );
  set_long( "Billy is a rather unpopular employee here at the Company.  With society's hostile contempt towards tobacco smoking, Billy's unfathomable cigarette addiction is not well received.  He has been threatened several times by his boss to quit or be fired.  However, the truth of the matter is, it is difficult to find competent managers that will live on a barren mining colony like Core.  Unless that changes, Billy will continue to smoke like a smokestack and still retain his job." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
