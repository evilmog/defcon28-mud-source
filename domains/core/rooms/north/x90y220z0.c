inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", 220);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Executive Corridor" );
  set_long( "You are in an executive corridor which the North Dome admin uses as an alternative to leave the North Dome area. Red carpet covers the floor, and somewhere an air-conditioner hums as you feel nice cold air caressing your body.\n\nA mass-transit station is to your southeast. The executive corridor continues to your west." );

 set_exits( ([
  "west" : DIR+"/rooms/north/x80y220z0.c",
  "southeast" : DIR+"/rooms/north/x100y210z0.c"
  ]) );
}
