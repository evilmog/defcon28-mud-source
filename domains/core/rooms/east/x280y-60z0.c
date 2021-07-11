inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 280);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Droid Maintenance Bay" );
  set_long( "This droid maintenance bay is used for advanced maintenance procedures on the droids. Doubling as a repair bay, this bay is equipped with a wide variety of maintenance and repair equipment.\n\nA corridor connects to this bay to the west. To the east is a droid docking bay.  The droid power station is to the north." );


  set_objects( 
 DIR+"/monsters/maintainer.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x280y-50z0.c",
  "east" : DIR+"/rooms/east/x290y-60z0.c",
  "west" : DIR+"/rooms/east/x270y-60z0.c"
  ]) );
}
