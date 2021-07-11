inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Clerk");
add_id("clerk");
  set_short( "A Complaint Department Clerk" );
  set_long( "A bored and disgruntled clerk who has been assigned to record down all the complaint reports from the employees and later pass it on to the proper people involved. His dishevelled clothes and untidy hair indicate a lack of personal grooming. This clerk doesn't seem to want to be here. Somehow, you suspect that this post isn't exactly an enviable one." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
