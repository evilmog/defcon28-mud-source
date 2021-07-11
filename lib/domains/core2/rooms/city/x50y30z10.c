inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 30);
  set_property("z", 10);

  add_area( "city" );
  set_short( "CFTC Administration: East Offices" );
  set_long( "The majority of the room is taken up by several desks in an array.  Each desk has a lamp and a chair.  Many trade clerks are here, doing various work that facilitates trade in the Financial Trade Center.  On the wall, a door leads to the Directors office." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x50y40z10.c",
  "south" : DIR+"/rooms/city/x50y20z10.c"
  ]) );
}
