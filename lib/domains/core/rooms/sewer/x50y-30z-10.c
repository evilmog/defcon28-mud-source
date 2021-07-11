inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Illuminated only by the small lights by the sides of the tunnel, the main access tunnel you are in gives you the creeps. Shadows seem to creep across the murky waters you are currently wading in. To make matters worse, the smell here is almost unbearable, a stench which seems to originate from the south of where you are. \n\nThe main access tunnel continues to the north. To the south is the southeast primary hub. " );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x50y-20z-10.c",
  "south" : DIR+"/rooms/sewer/x50y-40z-10.c"
  ]) );
}
