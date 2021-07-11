inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Large, dark and ominous, the main access tunnel gives you a gloomy feeling as you make your way through the large collection of dirt and sewage in it. Too high and dark to see the ceiling, you feel as if you are walking in the digestive tract of some huge beast, what with the stench, rotting garbage and all. \n\nTo your south the tunnel narrows into a waterway canal. The main access tunnel stretches to your east and west. " );


  set_objects( 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-30y-50z-10.c",
  "east" : DIR+"/rooms/sewer/x-20y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x-40y-40z-10.c"
  ]) );
}
