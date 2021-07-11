inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Server tech Debra");
add_id("server");
add_id("tech");
add_id("debra");
add_id("servertech");
add_id("techdebra");
add_id("servertechdebra");
  set_short( "Server tech Debra" );
  set_long( "Tall and lanky with a crop of untidy hair, Debra is a pretty drab-looking woman in her early twenties who probably got conned into working in this department on Core. A look of permanent boredom is etched on her face. From the way she carries herself, you gather that although her physical self is available, her mind seems to be far from Core. An air of half-heartedness hangs around her like some dark shroud." );

  set_gender("female");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
