inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Josef");
  set_short( "Financial Controller Josef Puldonsky" );
  set_long( "Steely eyes look back at you as you appraise this man. Josef Puldonsky is a bear of a man, measuring about six feet in height. A slight paunch indicate a lack of exercise, but this is overshadowed by the fact that this man is not only a shrewd businessman, but also one of the Company's best when it comes to financial matters. The Financial Controller's job on Core is not an easy one, but Josef is definitely the man for it. His eyes betray no trace of his current emotional status, only a cold and calculating look. Josef has no missing limbs. " );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
