inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Ursula");
add_id("ursula");
add_id("registrar");
  set_short( "Ursula, secretary of the East dome registrar" );
  set_long( "Ursula has got to be the most solemn nympho you have ever seen. Clothed in a sexy lily-colored blouse which more than exhibits her curvaceous body, Ursula sits in a rigidly straight pose as she goes about her work. Her eyes are fiercely fixed on the task at hand, her mouth a firm thin line. Definitely not a nympho to take home to bed with you." );

  set_gender("female");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
