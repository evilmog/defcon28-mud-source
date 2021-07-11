inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("President Wellin");
add_id("president");
add_id("wellin");
  set_short( "President Wellin" );
  set_long( "President Wellin does not live up to his title or name very well.  He is far from presidential or well.  He looks run down.  His suit is dirty, and his tie is undone.  It seems that his company's lack of success has taken its toll on his appearance." );

  set_gender("male");
  set_race("human");

  set_level(14);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 70);
  set_skill("combat/defense", 70);
}
