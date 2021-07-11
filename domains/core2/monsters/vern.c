inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Vern");
  set_short( "Supervisor Vern" );
  set_long( "A short stocky man, Vern is a pretty silent guy whose job is to make sure that everyone in this department does his or her work properly. He is very much learned in the ways of HR, and probably knows more about what to do here than anyone else in this deparment, having worked here ever since he could. Vern never moves from his place, and when he does move it's only when he has to go to the toilet or for lunch. " );

  set_gender("male");
  set_race("human");

  set_level(2);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 10);
  set_skill("combat/defense", 10);
}
