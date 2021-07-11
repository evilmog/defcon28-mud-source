inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "The smooth steel walls here have lost their former glimmer. As you move along, you notice many little footprints on the floor. Although the stench of the sewers is relatively strong here, you are no longer wading in sewage. \n\nService ducts leave north, south and east. What looks like a lair lies to your west." );


  set_objects( 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x60y50z-10.c",
  "south" : DIR+"/rooms/sewer/x60y30z-10.c",
  "east" : DIR+"/rooms/sewer/x70y40z-10.c",
  "west" : DIR+"/rooms/sewer/x50y40z-10.c"
  ]) );
}
