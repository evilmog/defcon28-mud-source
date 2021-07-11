inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 60);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Steam Room" );
  set_long( "This is a large room, the floors and walls can not be seen due to the large amount of steam. The room is faintly lit with red lighting and you swear you can hear a creature in the background.\n\nYou can return to generator control by going up the ladder." );


  set_objects( 
 DIR+"/monsters/sewerboss.c"
);
 set_exits( ([
  "up" : DIR+"/rooms/sewer/x50y60z-10.c"
  ]) );
}
