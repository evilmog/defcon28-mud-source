inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Magnus");
  set_short( "Magnus" );
  set_long( "Magnus is a middle-aged cyborg with a large, nasty looking scar running from his left cheek down to his jawbone.  Despite his somewhat rough appearance, he has a friendly sparkle in his eye." );

  set_gender("male");
  set_race("human");

  set_level(1);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 5);
  set_skill("combat/defense", 5);
}
