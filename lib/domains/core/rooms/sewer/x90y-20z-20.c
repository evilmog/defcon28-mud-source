inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", -20);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "Steel walls surround you. This is a cold room, a situation no doubt caused by the metal surfaces of the room. It is all but empty save an iron ladder which takes you up to the top level of the shaft. \n\nYou can go up to the top part of the shaft. Otherwise, you may go northwest and southwest into what look like atriums." );

 set_exits( ([
  "northwest" : DIR+"/rooms/sewer/x80y-10z-20.c",
  "southwest" : DIR+"/rooms/sewer/x80y-30z-20.c",
  "up" : DIR+"/rooms/sewer/x90y-20z-10.c"
  ]) );
}
