inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "The service duct is reasonably well-lit, enough for you to see the many small footprint marks on the floor. The steel walls here are no longer shiny - you can hardly see any reflection in them anymore.\n\nYou can move on south or east in this service duct." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x60y40z-10.c",
  "east" : DIR+"/rooms/sewer/x70y50z-10.c"
  ]) );
}
