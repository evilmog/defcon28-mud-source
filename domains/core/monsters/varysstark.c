inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Varys Stark");
add_id("varys");
add_id("stark");
add_id("varysstark");
  set_short( "Varys Stark, Operations Officer" );
  set_long( "A rather large and gruely looking abernon.  His clothes barely fit him.  In fact, that's why he's wearing regular issue gear for miners.  His hands are so big, that combat knives look like butter knives.  His face is hairy and his breath smells like glarg.  Although his appearance shows him as filthy you see all his awards pinned to his outfit. The ones that stand out the most are the Odra assault ribbons.  This guy is practicly a war hero. Varys has no missing limbs. " );

  set_gender("male");
  set_race("human");

  set_level(7);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 35);
  set_skill("combat/defense", 35);
}
