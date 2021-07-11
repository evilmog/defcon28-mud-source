inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "These long main access tunnels seem to stretch from one end to another endlessly. Dark, murky, uncomfortable and downright smelly, this tunnel is no different from the rest. And the cold sewage you are wading in is not making things any easier. \n\nYou can go along the main access tunnels to the north or south. Alternatively, a service duct branches out to the east. " );


  set_objects( 
 DIR+"/monsters/boa.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x50y-50z-10.c",
  "south" : DIR+"/rooms/sewer/x50y-70z-10.c",
  "east" : DIR+"/rooms/sewer/x60y-60z-10.c"
  ]) );
}
