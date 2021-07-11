inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", -110);
  set_property("z", 0);

  add_area( "south" );
  set_short( "Section:  North End" );
  set_long( "You have just entered housing dome #3 through an airlock. This dome is slightly smaller than housing dome #2.  Its residents are not many but sport items of value and hard work. Some are lounging under palm trees conversing with one another as newcomers gape at the luxury that surrounds them." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x0y-100z0.c",
  "south" : DIR+"/rooms/south/x0y-210z0.c"
  ]) );
}
