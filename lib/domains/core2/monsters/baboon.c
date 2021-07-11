inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Insane Baboon");
add_id("baboon");
add_id("insane");
add_id("insanebaboon");
  set_short( "Insane Baboon" );
  set_long( "This is a gibbering, crazy, lunatic Baboon. It looks mad enough to be a Pink Floyd listener, hell it even looks mad enough to understand the WALL! Hmm, mebbe it might not be such a great idea to attack such a barmy creature!, Then again, mebbe someone ought to put it out of its misery!" );

  set_gender("male");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
