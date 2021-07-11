inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", 220);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Executive Corridor" );
  set_long( "Dimly-illuminated, this executive corridor is a quiet passage used by the dome's administrator as an alternate exit to the mass-transit station. The floor is nicely covered with a fine red carpet, and the air here is cool.\n\nThis quiet corridor extends to your east and northeast." );

 set_exits( ([
  "east" : DIR+"/rooms/north/x90y220z0.c",
  "northeast" : DIR+"/rooms/north/x90y230z0.c"
  ]) );
}
