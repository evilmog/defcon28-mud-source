inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("sandworm");
  set_short( "sandworm" );
  set_long( "This is a long sand worm, it looks very hungry." );

  set_gender("male");
  set_race("worm");

  set_level(12);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 60);
  set_skill("combat/defense", 60);
set_aggressive (1);
}

void monster_died(void) {
  int q7track;
  q7track = killer->query_q7_tracker();
  if (q7track == 63) {
    write("%^YELLOW%^EvilMogs Agent %^MAGENTA%^tells you: Good job on eliminating the sandworm and resolving the situation...%^RESET%^\n");
    write("%^YELLOW%^EvilMogs Agent %^MAGENTA%^tells you: return to the access panel%^RESET%^\n");
    killer->set_q7_tracker(127);

  }
}
