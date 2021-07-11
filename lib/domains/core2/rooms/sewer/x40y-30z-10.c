inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "This rather clean service duct is not only almost free from the distinct stench of the sewage waters, but more importantly, this passage is dry. It doesn't look like it has been used much. \n\nThe service duct progresses to the west. A main access tunnel lies to the south. " );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x40y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x30y-30z-10.c"
  ]) );
}
