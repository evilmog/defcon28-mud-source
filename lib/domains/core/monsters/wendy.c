inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Wendy");
add_id("wendy");
add_id("dome");
add_id("admin");
add_id("domeadmin");
  set_short( "Wendy the dome admin" );
  set_long( "Long straight hair tied back neatly, the woman before you is professionalism in human form. Every inch of her screams corporateness, from her immaculate executive suit right down to her unsmiling beautiful face. Steely eyes evaluate you as you in turn look over her, and you get the feeling that she doesn't take lightly to be looked over. Wendy is the corporate lady in every sense, as you detect a capacity to smile and be nice when she has to, but only when it is necessary. Otherwise, all you will ever get from her is a cold hard stare." );

  set_gender("female");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
