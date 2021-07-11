inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 80);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Corridor to Financial District" );
  set_long( "This appears to be a relatively unused section of hallway.  The walls still appear to be brand new with their original white paint.  The grey carpet on the floors also appears to be brand new as well.\n\nThis corridor leads from the Citys northern Mass Transit station to the Financial District.  In addition to providing access to the Citys trading exchanges, the Financial District contains The Companys accounting offices and can be used as a bypass if the nearby station is damaged." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x20y70z0.c",
  "northwest" : DIR+"/rooms/city/x10y90z0.c"
  ]) );
}
