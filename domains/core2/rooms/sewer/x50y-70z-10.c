inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The small lights by the sides of the main access tunnel provides little illumination against the darkness you are in. The cold water you are waist-deep in chills you... not because of the icy water, but of the unknown dangers which lurk within the garbage. \n\nThe main access tunnel continues to the north and south. A large pipe juts out here to the west. " );

  add_item("pipe", "This is a pipe");
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x50y-60z-10.c",
  "south" : DIR+"/rooms/sewer/x50y-80z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x40y-70z-10.c",
  ]) );
}
