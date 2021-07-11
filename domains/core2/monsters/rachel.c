inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Rachel");
add_id("rachel");
  set_short( "Nurse Rachel" );
  set_long( "You see a fat muscular woman in her forties. Her white nurse uniform seems to be extremely tight-fitting, with folds of fat jutting out at regular intervals of her body. Her matronly look is disguised by the fact that deep in her heart, she is a sadistic woman who enjoys nothing more than the suffering of her patients. Ever since she was transferred from Earth to Core, she has been cut off from her usual doses of suffering. Now, all she can do is find satisfaction in the meager daily pains of the employees on this planet." );

  set_gender("female");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
