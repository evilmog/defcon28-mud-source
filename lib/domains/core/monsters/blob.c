inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Dark Blob");
add_id("dark");
add_id("blob");
add_id("darkblob");
  set_short( "dark blob" );
  set_long( "A blob of dark matter is moving nearby. As it is basically shapeless, you assume that this is a form of mutated lifeform due to the unnatural tentacles which appear to be trailing in the water from under it. It doesn't seem to be hostile, and it doesn't even seem to notice that you are here." );

  set_gender("neuter");
  set_race("blob");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
