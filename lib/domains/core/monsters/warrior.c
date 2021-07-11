inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Warrior Rat");
add_id("warrior");
add_id("rat");
add_id("warriorrat");
  set_short( "Warrior Rat" );
  set_long( "Much bigger than your average rat, this fierce-looking rodent has battle scars all over its body, the veteran of many battles with the rats. Among its vermin kin, this particular rat is very much feared and respected. " );

  set_gender("female");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
