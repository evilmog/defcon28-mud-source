inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is one of the main corridors of the Citys Financial District.  The walls are white and the floors have relatively new grey carpet on them. To the west an access panel leads to Brian the stock analysts office, while the corridor appears to continue infinitely to the south." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x20y80z0.c",
  "south" : DIR+"/rooms/city/x20y60z0.c",
  "west" : DIR+"/rooms/city/x10y70z0.c"
  ]) );
}
