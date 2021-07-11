inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Queen Rat");
add_id("queen");
add_id("rat");
add_id("queenrat");
  set_short( "Queen Rat" );
  set_long( "This is one ugly rat, it may be small but it's got blood dripping from its teeth and its fur is all matted." );

  set_gender("female");
  set_race("human");

  set_level(8);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 40);
  set_skill("combat/defense", 40);
}

void monster_died(void) {
   if (killer->is_completed_quest("Rats") == 1) {
     return;
   } else {
     write("You Killed the Queen Rat, return to Kendall and ask about rats...");
     killer->set_q7_tracker(1);
   }
}
