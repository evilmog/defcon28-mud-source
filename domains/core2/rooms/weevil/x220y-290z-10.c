inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 220);
  set_property("y", -290);
  set_property("z", -10);

  add_area( "weevil" );
  set_short( "Entrance to Secret dump site" );
  set_long( "The room feels funny, and smells odd. You notice a sturdy door that is almost closed, but stuck.  Some sort of sticky slime is all over the place here, leading into the room behind the door. You see a sign saying that the cylindrical rods have been moved to the Reactor storeroom.  You hear scraping noises somewhere close. " );

  add_item("door", "You look at the broken door, and wonder how it got stuck, but there is enough room to fit something against it and pry it open. ");

  set_objects( 
 DIR+"/monsters/massiveweevil.c", 
 DIR+"/monsters/massiveweevil.c", 
 DIR+"/monsters/massiveweevil.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/weevil/x230y-290z-10.c"
  ]) );
}
