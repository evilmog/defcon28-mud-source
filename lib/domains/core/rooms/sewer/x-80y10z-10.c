inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Water Tunnel" );
  set_long( "With sewage swirling around your feet, you cautiously make your way along this water tunnel. Staying away from the moldy walls, you keep to the middle of the tunnel, ever vigilant for anything to happen. \n\nYou may leave north or west." );


  set_objects( 
 DIR+"/monsters/slug.c", 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-80y20z-10.c",
  "west" : DIR+"/rooms/sewer/x-90y10z-10.c"
  ]) );
}
