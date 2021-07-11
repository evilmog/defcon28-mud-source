inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Reactor storeroom" );
  set_long( "This storeroom is where the reactor techs keep their components and equipment. Racks and shelves of technical materials, some of which you haven't even seen before, align the walls of this storeroom. A solitary lightpad in the ceiling provides sufficient illumination for you to look around.\n\nYou can leave by going west." );

 set_exits( ([
  "west" : DIR+"/rooms/city/x-30y10z0.c"
  ]) );
}
