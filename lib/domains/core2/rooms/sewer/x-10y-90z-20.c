inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -90);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "This is an access shaft, a steel-walled room which Company personnel use to get from one level of the sewers to another. You are standing at the bottom level of one such shaft.\n\nNortheast and northwest take you underground atriums. Going up will put you at the top of the access shaft." );

 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x0y-80z-20.c",
  "northwest" : DIR+"/rooms/sewer/x-20y-80z-20.c",
  "up" : DIR+"/rooms/sewer/x-10y-90z-10.c"
  ]) );
}
