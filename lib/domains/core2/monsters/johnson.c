inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Sewer Engineer Johnson");
add_id("johnson");
add_id("sewer");
add_id("engineer");
  set_short( "Sewer Engineer Johnson" );
  set_long( "This 6-foot cyborg with a body almost totally encased in metal has been examining the condition of this room. The cyborg, who is called Johnson according to the nametag on its partially metal chest, looks up at you as you enter with cold calculating eyes before continuing on his work. You realize that he must have been chosen to work in this purportedly dangerous area due to his immense strength." );

  set_gender("male");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
