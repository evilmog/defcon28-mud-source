inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Human Resources - Advancement and Promotions" );
  set_long( "The promotions department has long ago been replaced by computers. Since the AI thinks its better than us we only get the stanard 3% yearly raise and a certificate to purchase a new company coffee mug. However coffee mugs are banned on the colony so it will be held in trust for your next of kin. Have a good day meatbag." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-80y-30z0.c"
  ]) );
}
