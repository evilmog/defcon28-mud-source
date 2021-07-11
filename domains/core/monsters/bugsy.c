inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Bugsy");
add_id("bugsy");
add_id("exterminator");
add_id("bug");
  set_short( "Bugsy the Bug Exterminator" );
  set_long( "Bugsy the Bug Exterminator was once part of the Bug Girls, a group of five genetically engineered humans who had taken the law into their own hands to rid their homeworld of bugs. Now, after the Bug Girls split up to each go their separate ways, this cute baby-faced blonde has gone solo on her quest to eradicate bugs entirely from the galaxy. She's here because Guniko hired her to settle some pest problems he's been facing in his REACTOR ONE area. Rumour is that her relationship with company executives goes beyond professional." );

  set_gender("female");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
