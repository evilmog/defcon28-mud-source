inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -90);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Water Tunnel" );
  set_long( "You find yourself in a narrow tunnel. Sewage covers you feet, and you feel that the mold-covered walls are more confining than guiding in your attempt to move along here. It is rather dark and moist in here. \n\nThe water tunnel extends to the south. To the east is a service duct." );


  set_objects( 
 DIR+"/monsters/slug.c", 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-90y30z-10.c",
  "east" : DIR+"/rooms/sewer/x-80y40z-10.c"
  ]) );
}
