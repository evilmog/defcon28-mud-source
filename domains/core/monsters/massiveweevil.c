inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Massive Weevil");
add_id("massive");
add_id("weevil");
add_id("massiveweevil");
  set_short( "Massive Weevil" );
  set_long( "This is a massive weevil, with many arms and legs. Each arm and leg is equipped with sharp talons and claws.  There are many brands that have been burnt onto its skin, but it's impossible to make them out even slightly. The skin of this weevil has extremely tough skin, like an alligator. Infact, this thing looks alot stronger than an alligator.  Something is not right about this. " );

  set_gender("neuter");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
