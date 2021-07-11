inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Sewer Boa");
add_id("sewer");
add_id("boa");
add_id("sewerboa");
  set_short( "Sewer boa" );
  set_long( "Like the ones in the Amazon, this sewer boa kills its victims by crushing their bones. Right now, it's looking at you like you might be next. The cold-blooded eyes following your every move is quite unnerving. Don't hang around too long." );

  set_gender("female");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
