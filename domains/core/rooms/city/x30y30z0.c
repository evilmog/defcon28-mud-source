inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "All types of financial transactions can be made here, and the Stock Market in particular is very popular with rich miners and common traders alike. If you have got credits to spare, this is the place for you to invest and increase your profits.\n\nThe Metal Exchange is to the north, and the Stock Exchange is to the east." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x30y40z0.c",
  "east" : DIR+"/rooms/city/x40y30z0.c",
  "southwest" : DIR+"/rooms/city/x20y20z0.c"
  ]) );
}
