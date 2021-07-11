inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 290);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Reading Room" );
  set_long( "You are at the western end of the reading room area. Bright lights illuminate this room, bringing a certain shine to the tables and chairs around here. Although the air-conditioning system is not working, a ceiling fan on the ceiling dispels the heat with its much-needed wind.  The exit is to your east." );


  set_objects( 
 DIR+"/monsters/tom.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/north/x60y290z0.c"
  ]) );
}
