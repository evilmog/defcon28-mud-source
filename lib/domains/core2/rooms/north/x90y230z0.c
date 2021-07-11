inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", 230);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Executive Corridor" );
  set_long( "This quiet passage is an executive corridor, used by the North Dome's admin to exit the North Dome area alternatively just in case certain situations should arise. The grandeur of this place is not missed, especially with the working air-conditioner and the red carpet which is the corridor's surface.\n\nThe executive corridor extends southwest." );

 set_exits( ([
  "southwest" : DIR+"/rooms/north/x80y220z0.c"
  ]) );
}
