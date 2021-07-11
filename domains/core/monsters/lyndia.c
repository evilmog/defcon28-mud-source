inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Lyndia");
add_id("lyndia");
add_id("head");
add_id("clerical");
add_id("clericalhead");
add_id("clerical head");
  set_short( "Lyndia, Clerical Head" );
  set_long( "Lyndia is a woman in her early thirties. She has worked hard to get to where she's at, and although her pay isn't all that good, she's' more than contented with what she has got. These days, she works hard for the Company, giving everything her best. This has resulted in her getting good reviews from her superiors. The future looks pretty bright for this clerical head in the Company." );

  set_gender("female");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
