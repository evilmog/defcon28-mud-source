inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Maxim Rogers");
add_id("maxim");
add_id("maximrogers");
  set_short( "Sewer Engineer Maxim Rogers" );
  set_long( "This is Maxim Rogers, a nympho who has worked very hard to get where she is now. By far, she is one of the more intelligent nymphos around. Although she has long neglected her looks for a more intellectual purpose, you can see that this petite lady with shoulder-length auburn hair is muscularly shapely where it counts. She can't be over 25 years of age, but you can see that years of serious study of the sewers and other intellectual matter has taken a slight toll on her. " );

  set_gender("female");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
