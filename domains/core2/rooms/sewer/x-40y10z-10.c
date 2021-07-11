inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You feel threatened by the low ceiling, which could very well drown you should the water level choose to suddenly rise. Right now the sewer water is at your knee, but with the narrow and dark walls, you would not know that it's risen till you find yourself choking in gutter water. \n\nWaterway canals extend to your north, east and west." );


  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-40y20z-10.c",
  "east" : DIR+"/rooms/sewer/x-30y10z-10.c",
  "west" : DIR+"/rooms/sewer/x-50y10z-10.c"
  ]) );
}
