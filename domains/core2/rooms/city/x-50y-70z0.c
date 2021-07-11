inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Airlock Anteroom" );
  set_long( "This is a small room used to stage equipment and suits before entering the airlock and cycling to leave to the outside. There is a long, narrow corridor to the north that leads back to the main southwest corridor, and safety.  To the south is the airlock." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-50y-60z0.c",
  "south" : DIR+"/rooms/city/x-50y-80z0.c"
  ]) );
}
