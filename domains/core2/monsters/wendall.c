inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Wendall");
add_id("wendall");
  set_short( "Mr. Wendall, Duchies ex-secretary" );
  set_long( "Wendall is one of those guys that makes every other male around him feel inadequate.  Meanwhile, the women practically rip off all their clothes and beg him to pleasure them.  Somehow, Vice President Duchie persuaded Wendall to take the humble position of secretary.  Somehow." );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
