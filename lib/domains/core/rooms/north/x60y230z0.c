inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 230);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "A long corridor with steel as floor, ceiling and walls. Your footfalls echo most eerily here with a certain steely quality to it. All this steel seems to be contributing to the heat building up here as a result of the spoilt air-conditioning.\n\nYou may continue along this corridor by going north or south. To your west is the dome security office." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x60y240z0.c",
  "south" : DIR+"/rooms/north/x60y220z0.c",
  "west" : DIR+"/rooms/north/x50y230z0.c"
  ]) );
}
