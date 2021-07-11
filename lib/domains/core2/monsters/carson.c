inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Engineer Carson");
add_id("engineer");
add_id("carson");
  set_short( "Engineer Carson" );
  set_long( "Fat, sweaty and balding, Engineer Carson is the epitome of a man who is in serious need of exercise. Carson was once a pretty lean man, but too much sitting and an obsessive liking for sugar-coated chocolate doughnuts have piled up the fat on him. He is a representative of City Engineering - one of their less docile ones, and he's hanging around here to protect the City Engineers' interests. Naturally, being a City Engineer has made him more than a little pompous." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
