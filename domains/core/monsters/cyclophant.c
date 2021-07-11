inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("cyclophant");
  set_short( "cyclophant" );
  set_long( "Relatively tall and moderately built, the cyclophant is one of the security grunts of the Prison dome. Unlike the security droids, the cyclophant is a human which has been trained in hand-to-hand combat. Dressed in tight-fitting black uniform with intermittent attachments of red body armour, he is indeed an imposing sight. This guard constantly scans the room for wrongdoings, but you don't have anything to fear from him as long as you commit no crime." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
