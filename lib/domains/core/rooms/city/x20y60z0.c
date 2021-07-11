inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is one of the main corridors of the Citys Financial District.  This corridor appears to have brand new paint and the floor appears to have been freshly carpeted.\n\nAn access panel to the west appears to lead to the stock analyst's office.\n\nThe corridor appears to continue north and infinitely to the south." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x20y70z0.c",
  "south" : DIR+"/rooms/city/x20y50z0.c",
  "west" : DIR+"/rooms/city/x10y60z0.c"
  ]) );
}
