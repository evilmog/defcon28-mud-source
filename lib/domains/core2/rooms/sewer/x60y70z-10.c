inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Generator Corridor" );
  set_long( "You are at the eastern end of a long bluish corridor which stretches all the way to the west. From where you are, you can see that many other corridors intersect with the corridor you are in now. The bright illumination of the corridor combined with the bluish glow of the blue stripe in the walls give you an underwater feeling.\n\nCorridors extend to your north and west." );


  set_objects( 
 DIR+"/monsters/drone.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x60y80z-10.c",
  "west" : DIR+"/rooms/sewer/x50y70z-10.c"
  ]) );
}
