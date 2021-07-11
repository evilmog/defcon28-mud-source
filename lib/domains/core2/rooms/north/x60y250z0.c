inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 250);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Server Room 1" );
  set_long( "Flickers from LEDs and tiny bulbs illuminate this room. Upon inspection, this place is designed to house a huge computer server. Rows of flashing lights adorn the walls, each light signifying some special thing of which you do not have an inkling of. The server itself is located in the middle of the room, a hulking behemoth of flashing lights.\n\nThe exit is located west." );


  set_objects( 
 DIR+"/monsters/mei.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/north/x50y250z0.c"
  ]) );
}
