inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "This silent but dry duct looks like a good place to rest, except that the tiny footprint marks on the floor is making you rather insecure about your immediate safety. Still, you wouldn't expect too much from creatures that small... or should you?\n\nYou may move on to the north and south in this service duct." );


  set_objects( 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x60y30z-10.c",
  "south" : DIR+"/rooms/sewer/x60y10z-10.c"
  ]) );
}
