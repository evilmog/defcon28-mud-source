inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Jacob");
add_id("jacob");
  set_short( "Safety Director Jacob" );
  set_long( "A tall, slender balding man with a goatee, Jacob is the person who's in charge of safety on Core. His slow steady step shows a state of mind which is calm, and you notice that his slow calculated speech is indicative well-thought out responses to each question and sentence. In reality, Jacob is a very careful man, the ideal candidate for the directorship in this department. His responsibilities include planning out and evaluating safety procedures for the Company." );

  set_gender("male");
  set_race("human");

  set_level(10);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 100);
  set_skill("combat/defense", 100);
}
