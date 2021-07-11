inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", 10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is a relatively spartan loading room.  The floors are stainless steel and the walls are jet black titanium.  The mass transit tube entrance is to the southeast and the main airlock door to the financial district is to the northwest." );

 set_exits( ([
  "northwest" : DIR+"/rooms/city/x80y20z0.c",
  "southeast" : DIR+"/rooms/city/x100y0z0.c"
  ]) );
}
