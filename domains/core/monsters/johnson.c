inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Sewer Engineer Johnson");
add_id("johnson");
add_id("sewer");
add_id("engineer");
  set_short( "Sewer Engineer Johnson" );
  set_long( "This 6-foot cyborg with a body almost totally encased in metal has been examining the condition of this room. The cyborg, who is called Johnson according to the nametag on its partially metal chest, looks up at you as you enter with cold calculating eyes before continuing on his work. You realize that he must have been chosen to work in this purportedly dangerous area due to his immense strength." );

  set_gender("male");
  set_race("cyborg");

  set_level(15);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 200);
  set_skill("combat/defense", 200);
}

void monster_died(void) {
  int q7track;
  q7track = killer->query_q7_tracker();
  if (q7track == 31) {
    write("%^YELLOW%^EvilMogs Agent %^MAGENTA%^tells you: Good job on eliminating the target and resolving the situation...%^RESET%^\n");
    write("%^YELLOW%^EvilMogs Agent %^MAGENTA%^tells you: return to the access panel%^RESET%^\n");
    write("%^YELLOW%^EvilMogs Agent %^MAGENTA%^tells you: also enjoy a 100000 credit bonus....\n%^RESET%^");
    killer->add_money("credit", 100000);
    killer->set_q7_tracker(63);

  }
}
    
