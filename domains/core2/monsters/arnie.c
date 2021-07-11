inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Arnie");

  set_objects( 
 DIR+"/objects/tracker.c"
);
  set_short( "Arnie" );
  set_long( "Wild eyes look at you from behind long dishevelled hair. Arnie's face is covered with wrinkles which contorts the old hermit's face whenever he smiles nervously. The stink which he is exuding is enhanced by the bundled clothes covering his body, clothes which you doubt have ever been washed. " );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
