inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Edwardio");
  set_short( "Edwardio the Director of Human Resources" );
  set_long( "You're a bit surprised to find that the Director of Human Resources is in fact a liktah and not a human, but after awhile you realize why the Company chose him. Edwardio is a happy person with a permanent grin on his face. He's constantly cracking jokes, but deep inside he's more than just a good entertainer. In fact, he's one of the best mediators around, and when the situation calls for it, he can get professional and sensitive to others' feelings. But right now, Ed is in his usual happy mood as he bustles around his office merrily. " );

  set_gender("male");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
