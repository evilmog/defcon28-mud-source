inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Branch Manager Diana");
add_id("branch");
add_id("manager");
add_id("diana");
  set_short( "Branch Manager Diana" );
  set_long( "Diana is extremely attractive. She has long legs that lead up to her short, purple business skirt. She has long curly brown hair framing her perfect face. As branch manager on a planet unimportant to Mars Financial's future, Diana does not have a lot of work to do here. his leaves her time open for other pursuits." );

  set_gender("female");
  set_race("human");

  set_level(16);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 80);
  set_skill("combat/defense", 80);
}
