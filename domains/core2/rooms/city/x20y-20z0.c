inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Main Southeast Corridor" );
  set_long( "This is the main corridor of the southeastern quadrant of the city dome, which runs east and south.  The Office of Company Ethics is to the north and the Department of Complaints is to the west.  The eastern leg of the corridor will take you to the starport.  The central mass-transit station is northwest of here." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x20y-10z0.c",
  "south" : DIR+"/rooms/city/x20y-30z0.c",
  "east" : DIR+"/rooms/city/x30y-20z0.c",
  "west" : DIR+"/rooms/city/x10y-20z0.c",
  "northwest" : DIR+"/rooms/city/x10y-10z0.c"
  ]) );
}
