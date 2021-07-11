inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Ol Tom");
add_id("ol");
add_id("tom");
add_id("oltom");
  set_short( "Ol Tom the miner" );
  set_long( "Ol Tom is legendary. He s one of the old miners who were brought from Earth to help the Company with the mining tactics on Core. It is said that prior to his assignment on Core, Tom was one of those daredevil miners who was sent down to deal with lethal situations in the mine. Now, he's just a wrinkled old coot who just sits around reading in the North Domes reading rooms, ever waiting for the time the Company needs him again for some death-defying task." );

  set_gender("male");
  set_race("human");

  set_level(5);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 25);
  set_skill("combat/defense", 25);
}
