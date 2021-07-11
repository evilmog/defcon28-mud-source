inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "%^GREEN%^Corridor to Financial District%^RESET%^" );
  set_long( "This corridor leads from the Citys central Mass Transit station to the Financial District.  In addition to providing access to the City's trading exchanges, the Financial District contains The Companys accounting offices and can be used as a bypass to reach either the North or East Mass Transit stations, should the central station be damaged.\n\nThe walls appear to be reinforced titanium and the floors are of an unknown metalic construction.  Noise from the Citys central Mass Transit station can be heard to the immediate southwest." );

 set_exits( ([
  "northeast" : DIR+"/rooms/city/x20y20z0.c",
  "southwest" : DIR+"/rooms/city/x0y0z0.c"
  ]) );
}
