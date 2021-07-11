inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 290);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Reading Room" );
  set_long( "This is a reading room. It is very brightly-lit, with many tables and chairs around for those who wish to read. The floor is nicely carpetted, providing a soft touch to those who walk on it. A ceiling fan brings you nice wind from the ceiling.\n\nThe reading room continues to the west. The library is located to your south." );

 set_exits( ([
  "south" : DIR+"/rooms/north/x60y280z0.c",
  "west" : DIR+"/rooms/north/x50y290z0.c"
  ]) );
}
