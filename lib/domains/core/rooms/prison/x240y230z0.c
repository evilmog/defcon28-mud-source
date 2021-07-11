inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 240);
  set_property("y", 230);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "CITY Detention Center - Holding Cell" );
  set_long( "You are in a cell in the CITY Detention Center.  The new cells allow the prisoners to intermingle within a single area that holds all guilty individuals.  You're free to roam within the containment area to your heart's content.  Just don't expect to waltz out if you're being held here.  In this corner of the cell block, a few games have been set up to occupy the time of the inhabitants. " );

 set_exits( ([
  "south" : DIR+"/rooms/prison/x240y220z0.c",
  "west" : DIR+"/rooms/prison/x230y230z0.c",
  "southwest" : DIR+"/rooms/prison/x230y220z0.c"
  ]) );
}
