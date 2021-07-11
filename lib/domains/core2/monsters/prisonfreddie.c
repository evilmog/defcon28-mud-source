inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Freddie");
add_id("freddie");
  set_short( "Freddie" );
  set_long( "Poor Freddie just can't control his temper.  Freddie is almost a regular within the detention center, spending most of his time in here due to pub brawls and picking fights in the mine.  The guards almost consider him a member of the Enforcement family, as he helps keep the other prisoners in line as well. " );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
