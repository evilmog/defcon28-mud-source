inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 20);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Maintenance Corridor" );
  set_long( "You make your way across this maintenance corridor, well aware of the unexpected bursts of steam from the joints of the large pipes layed all over the top and sides of the passage you are in. It feels rather hot in here, due to the large amount of steam released.\n\nThis maintenance corridor extends to your northeast and west." );

 set_exits( ([
  "west" : DIR+"/rooms/sewer/x-20y20z-20.c",
  "northeast" : DIR+"/rooms/sewer/x0y30z-20.c"
  ]) );
}
