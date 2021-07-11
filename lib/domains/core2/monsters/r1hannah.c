inherit "/std/monster";

#include "../domain.h"

void setup(void) {
  set_name("hannah");
add_id("hannah");
add_id("reactor");
add_id("supervisor");
add_id("reactorsupervisor");
  set_short( "Hannah the Reactor Supervisor" );
  set_long( "A good example of one who has worked her way to the top. Hannah was just another secretary working for Grey when she was promoted to the REACTOR ONE project. There, she proved her worth by managing all the resources and overseeing the personnel. In fact, her current job is a direct result of her amazing aptitude in management. Close to forty, Hannah shows no sign of going soft yet. And she hardly even looks a day over twenty seven." );

  set_gender("female");
  set_race("human");

  set_level(6);

  set_hit_skill("combat/unarmed");
  set_skill("combat/unarmed", 30);
  set_skill("combat/defense", 30);
}
