inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Queen Slug");
add_id("queen");
add_id("slug");
add_id("queenslug");
  set_short( "Queen Slug" );
  set_long( "Black stripes adorn the body of the main slug herself. The normally pinkish body is yellow, while the slime around her is a glistening orange. This is the queen slug, and you have trespassed into her own private kingdom. " );

  set_gender("female");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
