inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Norman");
add_id("norman");
  set_short( "Director Norman" );
  set_long( "Director Norman is the man in charge of the Company's dealings in information and intelligence. His tall, thin and pale form might not be much to look at, but Norman is one of the most cunning businessman in Core. His field gives him free rein of the information in possession of the Company, and armed with this knowledge, he is able to make very profitable decisions apart from the usual information business of the Company over which he presides. A man of very few words, since Norman himself is aware that anything he says can be counted as information. And he intends to make a sale on every piece of info he lets out." );

  set_gender("male");
  set_race("human");

  set_level(4);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 20);
  set_skill("combat/defense", 20);
}
