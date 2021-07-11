inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 290);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "Your passage is buffeted by steel. The steel walls, steel floor and steel ceiling reflect back the bright lighting of the light panels above, making your journey an excessively bright one. Each step you take is echoed along the corridor, an effect of having steel plates for a floor.\n\nYou may continue to the south, southeast and northwest." );

 set_exits( ([
  "south" : DIR+"/rooms/north/x20y280z0.c",
  "northwest" : DIR+"/rooms/north/x10y300z0.c",
  "southeast" : DIR+"/rooms/north/x30y280z0.c"
  ]) );
}
