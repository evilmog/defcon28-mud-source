inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Slug");
  set_short( "Slug" );
  set_long( "Leaving slime around it, this wormlike creature is moving slowly but surely across the walls of the room. It may seem defenceless, but you're sure that its bulk hides its defensive capabilities." );

  set_gender("neuter");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
