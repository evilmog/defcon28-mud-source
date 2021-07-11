inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Black Panther");
add_id("panther");
add_id("black");
add_id("blackpanther");
  set_short( "Black Panther" );
  set_long( "This is a sleek black panther that pads around the jungle in a dark and threatening manner. It is completely black all over, except for its eyes, which are blazing yellow and glow with an evil glint. It looks hungry and it also looks like it could eat you without too much trouble, so maybe you better move along." );

  set_gender("female");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
