inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Clown");
add_id("evil");
add_id("clown");
add_id("evilclown");
  set_short( "Evil Clown" );
  set_long( "This is a clown in a black and white clown suit. He has black and white facepaint on and he looks absolutely menacing. His angular jawlines on his face and the creepy painted on smile make him look like he could kill you at any minute." );

  set_gender("male");
  set_race("human");

  set_level(12);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 200);
  set_skill("combat/defense", 200);
set_aggressive (1);
}
