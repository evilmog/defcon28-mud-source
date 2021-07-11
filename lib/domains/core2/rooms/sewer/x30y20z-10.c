inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You are somewhere in the middle of this waterway canal irrigation sub- system. Water is up to your waist here, and the swift current is threatening to sweep you off your feet. Your head is just touching the ceiling, while the walls here are very very narrow. \n\nYou can move on to other waterway canals located to your east and southeast." );


  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x40y20z-10.c",
  "southeast" : DIR+"/rooms/sewer/x40y10z-10.c"
  ]) );
}
