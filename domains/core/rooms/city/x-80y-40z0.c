inherit "/std/room";
inherit "/std/evil/advance";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", -40);
  set_property("z", 0);

  add_action("do_advance", "advance");
  add_action("do_quest", "claim");

  add_area( "city" );
  set_short( "Human Resources - Advancement and Promotions" );
  set_long( "The promotions department has long ago been replaced by computers. Since the AI thinks its better than us we only get the standard 3% yearly raise and a certificate to purchase a new company coffee mug. However coffee mugs are banned on the colony so it will be held in trust for your next of kin. Have a good day meatbag.\n\nTo advance a level type '%^MAGENTA%^advance%^CYAN%^' and if you are found worthy you will ascend a level.\n\nTo complete the ticket quest type '%^MAGENTA%^claim%^CYAN%^' and if you have all the keys it will be yours." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-80y-30z0.c"
  ]) );
}
