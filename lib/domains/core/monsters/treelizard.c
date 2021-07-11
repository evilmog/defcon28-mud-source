inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Tree Lizard");
add_id("tree");
add_id("lizard");
  set_short( "Tree Lizard" );
  set_long( "This slippery little tree lizard can change his colors to suit either the dark brown bark of trees, or the bright green of jungle foliage." );

  set_gender("male");
  set_race("human");

  set_level(1);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 5);
  set_skill("combat/defense", 5);
}
