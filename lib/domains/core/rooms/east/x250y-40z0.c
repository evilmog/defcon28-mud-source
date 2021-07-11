inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 250);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Public Relations" );
  set_long( "This is the East dome public relations office. The floor is comfortably covered with a plush green carpet. Soft yellow light illuminates the room, so as to give the room a relaxed atmosphere. This is where the general public go to to handle their businesses with the East dome.\n\nTo the south lies the planning room. The living stats department is located to your west, while a corridor is to your southeast." );


  set_objects( 
 DIR+"/monsters/roger.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/east/x250y-50z0.c",
  "west" : DIR+"/rooms/east/x240y-40z0.c",
  "southeast" : DIR+"/rooms/east/x260y-50z0.c"
  ]) );
}
