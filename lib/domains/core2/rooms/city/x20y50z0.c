inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is one of the main corridors of the Financial District, and it appears as if the walls have not een painted in ages while the carpet is considerably worse for wear.\n\nAn access corridor to the west leads to the financial managers office. The corridor continues to the north and south." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x20y60z0.c",
  "south" : DIR+"/rooms/city/x20y40z0.c",
  "west" : DIR+"/rooms/city/x10y50z0.c"
  ]) );
}
