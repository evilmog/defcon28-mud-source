inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Valerie");
add_id("valerie");
  set_short( "Valerie, Employee-Management Liaison Officer" );
  set_long( "Valerie is a very pretty human. Her curvaceous curves, well-toned body and smooth white skin have been known to turn on the female, male and neuter genders of all races. The Company has stationed her here in the hope that she can handle all employee-related problems without ever involving the management. So far, they have been more than successful in this endeavour. It seems that more often than not, Valerie manages to settle the problem herself, through channels best left unmentioned." );

  set_gender("female");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
