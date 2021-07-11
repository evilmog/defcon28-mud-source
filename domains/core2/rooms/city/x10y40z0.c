inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is a large office, the walls are stainless steel and the floor appears to be cheaply carpeted.  The walls are covered with corkboards, terminals and motivational posters.  A small desk sits in the corner with another terminal on it." );


  set_objects( 
 DIR+"/monsters/rick.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x20y40z0.c"
  ]) );
}
