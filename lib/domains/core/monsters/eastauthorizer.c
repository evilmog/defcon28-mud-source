inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("clerical authorizer");
add_id("clerical");
add_id("authorizer");
add_id("clericalauthorizer");
  set_short( "clerical authorizer" );
  set_long( "Looking self-important and disgustingly pleased with himself, the clerical authorizer is a pompous man who thinks that his job is the greatest one on Core. Although he doesn't carry much importance at all, the authorizer acts as if he is bigger than the dome manager himself, and constantly gripes about how he should be promoted to some better dome which deserves his services more. " );

  set_gender("male");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
