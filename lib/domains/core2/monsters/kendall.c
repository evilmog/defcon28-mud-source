inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Foreman Kendall");
add_id("kendall");
add_id("foreman");
  set_short( "Foreman Kendall" );
  set_long( "Foreman Kendall is the person who answers directly to the higher-ups regarding the fusion generator here. He is a plain-looking man, but the evil glint in his eyes betray a mind which is both devious and relentless. Having worked his way up from a normal reactor tech, Kendall now enjoys the privileges of a foreman - which also includes a very difficult time when the generator gets blown up." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
