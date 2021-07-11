inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Mila");
add_id("mila");
  set_short( "Mila, dome managers secretary" );
  set_long( "A human female from Earth who hails from the country once known to all as Russia, Mila is an attractive female in her mid-twenties who has been involved with the Company for all her life. Her parents were Company employees, and she was brought up in a Company environment. Her decision to work for the Company in Core is more of an issue of destiny. She would not have fit in anywhere else anyway." );

  set_gender("female");
  set_race("human");

  set_level(3);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 15);
  set_skill("combat/defense", 15);
}
