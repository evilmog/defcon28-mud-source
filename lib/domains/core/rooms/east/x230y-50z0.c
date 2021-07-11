inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 230);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Dome Managers Secretary" );
  set_long( "You are standing in the East dome managers secretarys office. An air-conditioner hums cheerfully in the corner, while a rather pleasant-looking desk sits in the southwestern corner of the room. It is quite comfortably lit here, and you can see everything in the room with astounding clarity.\n\nThe dome managers office lies to the north. To your east is the power management room. Northeast will take you to the living stats department. There seems to be a sort of maintenance storeroom to your west." );

  add_block("west");
  door_closed = 1;
  locked = 1;
  key = "eastkey";

  set_objects( 
 DIR+"/monsters/mila.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x230y-40z0.c",
  "east" : DIR+"/rooms/east/x240y-50z0.c",
  "west" : DIR+"/rooms/east/x220y-50z0.c",
  "northeast" : DIR+"/rooms/east/x240y-40z0.c"
  ]) );
}
