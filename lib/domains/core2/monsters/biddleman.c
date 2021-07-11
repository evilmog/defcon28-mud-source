inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Biddleman");
add_id("biddleman");
  set_short( "Mrs. Biddleman, the Director of Supply Distribution Logistics" );
  set_long( "No one, not even the Human Resources Department, knows Mrs. Biddlemans first name.  No one has ever seen her husband either or even confirmed that she is married.  Her pinched face peers out at you through horn rimmed glasses with a mixture of annoyance and disgust.  You wonder if getting a new stapler is worth dealing with this thoroughly unpleasant hag." );

  set_gender("female");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
