inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The thick sludge of accumulated sewage up to your waist is not very reassuring, especially since you can never tell what is lurking under the tons of trash which you are currently wading in. The edges of the tunnel where small light panels are located are of no help, them being too narrow to even get a decent foothold.\n\nTo your east and west the main access tunnel continues." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-10y60z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y60z-10.c"
  ]) );
}
