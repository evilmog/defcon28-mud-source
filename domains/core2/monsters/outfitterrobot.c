inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("outfitter robot");
add_id("robot");
add_id("outfitter");
add_id("outfitterrobot");
  set_short( "outfitter robot" );
  set_long( "This four-legged robot is yellow in color. It is rather huge, and a highly-developed sense of dexterity has been programmed into it to allow minute manipulations of droid parts in the outfitting process. Although it is invariably large, the outfitter has been given very accurate sensors to avoid unwarranted accidents as it moves around. " );

  set_gender("neuter");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
