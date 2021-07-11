inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Server tech Bol");
add_id("server");
add_id("tech");
add_id("bol");
add_id("servertech");
add_id("techbol");
add_id("servertechbol");
  set_short( "Server tech Bol" );
  set_long( "You find yourself looking at an extremely unattractive female blit. Her long hair is all messed up, and her sour face only serves to further uglify her. A well-rounded torso bulges out under her white techcoat, and you look away when you notice that the labcoat is so short that it reveals certain undesirable elements. Bol seems to hate people, a trait which you deduce from the way she snaps at everyone who comes into the server room." );

  set_gender("female");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
