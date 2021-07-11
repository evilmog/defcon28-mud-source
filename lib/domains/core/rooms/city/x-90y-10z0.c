inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -90);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Human Resources - Director's Office" );
  set_long( "This well appointed office belongs to the Director of Human Resources. Most surfaces are done in a black laquer over real hardwood. The cabinets, walls, desk, and couches are trimmed in chrome and black leather. The west wall is a huge picture window that looks out over the barren Core landscape. The other three walls have a non-stop 1 meter high strip of mirror on them, multiplying the view infinitely.\n\nThere is a small room to the south, while the exit is to the east. " );


  set_objects( 
 DIR+"/monsters/edwardio.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x-90y-20z0.c",
  "east" : DIR+"/rooms/city/x-80y-10z0.c"
  ]) );
}
