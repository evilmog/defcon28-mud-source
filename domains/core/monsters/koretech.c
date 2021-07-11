inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("maintenance tech");
add_id("maintenance");
add_id("tech");
add_id("maintenancetech");
  set_short( "maintenance tech" );
  set_long( "This is a rather scrawny individual who looks like he isn't quite as smart as he thinks he is. Your first clue is that he is currently using his screwdriver to scratch inside his ear. Once he notices you looking he quickly makes like he was doing something else." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
