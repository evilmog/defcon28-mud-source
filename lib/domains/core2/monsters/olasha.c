inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Olasha");
  set_short( "Olasha the Colony Quartermaster" );
  set_long( "Olashas Company-issued uniform is hopelessly wrinkled and smeared all over with grease stains.  Her boots are equally mistreated with countless scratches and scuff marks.  Judging by her physical appearance, one would guess she is about middle-age for her species." );

  set_gender("female");
  set_race("human");

  set_level(1);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 5);
  set_skill("combat/defense", 5);
}
