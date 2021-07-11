inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("green slime");
add_id("green");
add_id("slime");
  set_short( "Green Slime" );
  set_long( "SLIME!  Or is it some kinda weevil covered in slime? You doubt anyone will ever know for sure.  This thing needs to go. It wouldn't be safe to leave it here, it could cling to you, or something worse! Only a massive amount of some kind of toxic waste or chemical could do this. The slime moves slowely toward you, making a slow sloshing noise in the slime. " );

  set_gender("neuter");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
