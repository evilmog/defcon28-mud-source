inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 230);
  set_property("y", 220);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "CITY Detention Center - Holding Cell" );
  set_long( "You are in a cell in the CITY Detention Center.  The new cells allow the prisoners to intermingle within a single area that holds all guilty individuals.  You're free to roam within the containment area to your heart's content.  Just don't expect to waltz out if you're being held here. " );

 set_exits( ([
  "north" : DIR+"/rooms/prison/x230y230z0.c",
  "east" : DIR+"/rooms/prison/x240y220z0.c",
  "west" : DIR+"/rooms/prison/x220y220z0.c",
  "northeast" : DIR+"/rooms/prison/x240y230z0.c",
  "northwest" : DIR+"/rooms/prison/x220y230z0.c"
  ]) );
}
