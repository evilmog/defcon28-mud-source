inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Conference Room" );
  set_long( "Green-tiled walls surround this circular room. It's not too large, containing only a circular table with attendant chairs around it. The reactor crew uses this room for their meetings, and although it's known as the conference room, this room has never seen a true conference before. There are little shadows in this room, as the lightpads in the ceiling provide bright illumination.\n\nYou can leave by going northwest." );

 set_exits( ([
  "northwest" : DIR+"/rooms/city/x-20y70z0.c"
  ]) );
}
