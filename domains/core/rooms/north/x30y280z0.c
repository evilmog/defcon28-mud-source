inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 280);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "All you can hear here are your footsteps echoed heavily by the steel plates which make up this corridors floor. Together with the almost unbearably hot atmosphere here, you feel that you are starting to get a headache.\n\nYou may continue to your south or northwest." );

 set_exits( ([
  "south" : DIR+"/rooms/north/x30y270z0.c",
  "northwest" : DIR+"/rooms/north/x20y290z0.c"
  ]) );
}
