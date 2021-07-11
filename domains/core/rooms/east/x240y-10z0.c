inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 240);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "This corridor appears to be in the middle of a T-junction between what appears to be an office and two adjoining corridors. Blue stripes adorn the walls of the corridor, giving it a weirdly cool look.\n\nAn office is to your west. The corridor extends to the east and south." );

  add_block("west");
  door_closed = 1;
  locked = 1;
  key = "eastkey";

 set_exits( ([
  "south" : DIR+"/rooms/east/x240y-20z0.c",
  "east" : DIR+"/rooms/east/x250y-10z0.c",
  "west" : DIR+"/rooms/east/x230y-10z0.c"
  ]) );
}
