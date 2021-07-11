inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Black Mamba");
add_id("mamba");
add_id("black");
add_id("blackmamba");
  set_short( "Black Mamba" );
  set_long( "This is a long and evil looking snake, black with green diamonds on its back. It looks at you through dark green eyes and in its open mouth you can see poison-dripping fangs. It slithers around but never stops staring at you." );

  set_gender("neuter");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
