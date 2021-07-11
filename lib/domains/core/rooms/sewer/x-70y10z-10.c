inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "Damp and smelly, this large pipe is meant to allow the transfer of sewer water between different places, not facilitate the movements of travellers. Still, if it gets you to another place quickly...\n\nThe pipe continues to the north. It exits to the south into a main access tunnel." );


  set_objects( 
 DIR+"/monsters/slug.c", 
 DIR+"/monsters/slug.c", 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-70y20z-10.c",
  "south" : DIR+"/rooms/sewer/x-70y0z-10.c"
  ]) );
}
