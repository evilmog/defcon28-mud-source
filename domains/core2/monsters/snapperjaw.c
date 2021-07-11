inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Snapperjaw");
add_id("snapper");
add_id("jaw");
add_id("snapperjaw");
  set_short( "Snapperjaw" );
  set_long( "A mutated version of the native Earth sunflower, the snapperjaw will not hesitate to shred any living thing which happens to get into range of its huge serrated jaws. You'll want to be careful around this plant." );

  set_gender("neuter");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
