inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 290);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Droid Docking Bay" );
  set_long( "This is a docking bay for the droids which service the East dome. Multiple docks, each large enough to host a single droid, fill the room. The room is dimly-lit to conserve energy, and the smell of oil and machine lubricant fill the air. \n\nLocated at your south is another docking bay. The outfitting bay is to your north." );


  set_objects( 
 DIR+"/monsters/eastmaintenancedroid.c", 
 DIR+"/monsters/eastmaintenancedroid.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x290y-40z0.c",
  "south" : DIR+"/rooms/east/x290y-60z0.c"
  ]) );
}
