inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("Cell Guard");
add_id("cell");
add_id("guard");
add_id("cellguard");
  set_short( "Cell Guard" );
  set_long( "Despite typical stereotypes, this Nympho guard has been put in charge of keeping the peace within the prison cells.  Armed with a tranquilizer pistol, she seems more than capable of taking care of herself, judging by her...proportions. " );

  set_gender("male");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
