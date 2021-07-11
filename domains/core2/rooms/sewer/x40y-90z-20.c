inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -90);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "As you brush aside the large plants along the path, you see that the walls of the atrium have many vents in them. As you look, you notice that air is not being blown out of the vents, but is actually being sucked inside. This atrium was constructed to provide oxygen for the dwellers of the City dome.\n\nThe atrium extends to your northwest." );


  set_objects( 
 DIR+"/monsters/snapperjaw.c", 
 DIR+"/monsters/snapperjaw.c", 
 DIR+"/monsters/pottles.c"
);
 set_exits( ([
  "northwest" : DIR+"/rooms/sewer/x30y-80z-20.c"
  ]) );
}
