inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Receptionist Jackie");
add_id("jackie");
add_id("receiptionist");
  set_short( "Receptionist Jackie" );
  set_long( "Jackie has long curly black hair and a remarkably clear, pale face.  She greets you with a beautiful smile and a casual nod.  Although she is new at L.T. Smith, you can tell that she is a quick learner." );

  set_gender("female");
  set_race("human");

  set_level(14);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 70);
  set_skill("combat/defense", 70);
}
