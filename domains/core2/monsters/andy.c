inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Andy");
add_id("andy");
  set_short( "Andy, Public Relations Representative" );
  set_long( "Suave, slick with well-combed hair, Andy the PRO is your typical Company snake. His reputation precedes him, for you have heard a lot of bad things about him. From scandalously romancing the North Dome administrator to apple-polishing the Company Director's shoes, you get the feeling that this is one sneaky character you don't want handling your business. Theres even a serpentile look about him, as if the word snake really defines Andy." );

  set_gender("male");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
