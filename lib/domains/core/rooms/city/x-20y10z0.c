inherit "/std/room";
inherit "/std/evil/quest7";

#include "../../domain.h" 

void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 10);
  set_property("z", 0);
  add_action("do_touch", "touch");
  add_action("do_access", "access");
  add_area( "city" );
  set_short( "Reactor storeroom" );
  set_long( "This storeroom is where the reactor techs keep their components and equipment. Racks and shelves of technical materials, some of which you haven't even seen before, align the walls of this storeroom. A solitary lightpad in the ceiling provides sufficient illumination for you to look around.\n\nThere is a touch padd on one of the walls. You can leave by going west." );
  add_item("touch padd", "its a standard issue touch padd");
  
 set_exits( ([
  "west" : DIR+"/rooms/city/x-30y10z0.c"
  ]) );
}


