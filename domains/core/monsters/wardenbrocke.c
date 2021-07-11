inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Prison Warden Brocke");
add_id("warden");
add_id("prison");
add_id("prisonwarden");
add_id("brocke");
add_id("wardenbrocke");
add_id("prisonwardenbrocke");
  set_short( "Prison Warden Brocke" );
  set_long( "Brocke is a very short compact man in his early thirties. Despite his size however, he exudes a cold air of menacing competency that can only be a direct result of years of dealing with hardcore criminals.  He seems to have packed on a little weight since being promoted to Prison Warden. Brocke has no missing limbs. " );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
