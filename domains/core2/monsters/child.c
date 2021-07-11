inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("a Child");
add_id("child");
  set_short( "a Child" );
  set_long( "At first glance this appears to be a 9 year old girl, but as you look closer you realize that the childs eyes are dark and lifeless, their skin pale and white and their clothes tattered and torn. You swear you can see blood dropping from their feet which are floating a few inches above the ground." );

  set_gender("female");
  set_race("human");

  set_level(7);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 35);
  set_skill("combat/defense", 35);
set_aggressive (1);
}
