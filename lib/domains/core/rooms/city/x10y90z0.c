inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 90);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is a relatively spartan loading room.  The floors are stainless steel and the walls are jet black titanium.  The mass transit tube entrance is to the northwest and the main airlock door to the financial district is to the southeast." );

 set_exits( ([
  "northwest" : DIR+"/rooms/city/x0y100z0.c",
  "southeast" : DIR+"/rooms/city/x20y80z0.c"
  ]) );
}
