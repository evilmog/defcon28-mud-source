inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Groupie");
add_id("groupie");
  set_short( "Groupie" );
  set_long( "The band groupie eyes you, rubbing his nose while he does.  His hair is disarranged all over his body, and the black death metal shirt he's wearing looks to be about 5 days past due for a wash.  As you watch, he grabs a beer and drinks it, after spilling half on top of his head.  It would be a wise decision to stay away from such an unruly and icky sort of person." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
