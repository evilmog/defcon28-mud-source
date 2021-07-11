inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "You are in a service duct which is bright and dry, something of a rarity in the City sewers. As you stand around here, you smell stale air coming from your north. \n\nThe service duct stretches north and south." );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x90y30z-10.c",
  "south" : DIR+"/rooms/sewer/x90y10z-10.c"
  ]) );
}
