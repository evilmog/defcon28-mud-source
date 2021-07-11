inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( " This neverending main access tunnel stretches on in the darkness, a veritable hell in the bowels of the City itself. The small light panels by the sides of the tunnel are of no help, and they only serve to disorientate you further as you wade through the murky waters of sewers, trying to make sense of the feverish slime you are in. \n\nThere appears to be some kind of passage to your north. Otherwise, you may continue east and west along the main access tunnel." );


  set_objects( 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-30y70z-10.c",
  "east" : DIR+"/rooms/sewer/x-20y60z-10.c",
  "west" : DIR+"/rooms/sewer/x-40y60z-10.c"
  ]) );
}
