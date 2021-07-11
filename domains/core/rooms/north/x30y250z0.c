inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 250);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Storeroom" );
  set_long( "This small compartment is more of a closet than a storeroom. There is little here for the average resident of Core, for all it contains are maintenance materials for the maintenance droids and certain repair components for the repair droids. There is even a power socket here, but it can only be used by droids.\n\nThe corridor, your only exit out, lies to your north." );


  set_objects( 
 DIR+"/monsters/repairdroid.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/north/x30y260z0.c"
  ]) );
}
