inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 220);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Closet" );
  set_long( "This is a dusty unused closet, there is nothing in here but dust. The walls look like cheap drywall and the floor is not so clean tile." );

 set_exits( ([
  "east" : DIR+"/rooms/east/x230y-50z0.c"
  ]) );
}
