inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 250);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Server Room 2" );
  set_long( "This is a rather dark room, illuminated only by the small flashing lights of the server which stands in the middle of the room. You decide that this room has been specifically designed with the server in mind, as you can clearly see that the server fits into it perfectly, leaving just enough space for people to walk around it.\n\nYou can leave by going east." );


  set_objects( 
 DIR+"/monsters/bol.c", 
 DIR+"/monsters/debra.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/north/x50y250z0.c"
  ]) );
}
