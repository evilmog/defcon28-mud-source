inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 10);
  set_property("z", 10);

  add_area( "city" );
  set_short( "L.T. Smith: Trade Offices" );
  set_long( "The trade offices of L.T. Smith.  Ten office desks placed around the room provide a work area for L.T. Smith's many brokers.  The trade managers desk rests in the southwest corner, facing the brokers desks at an angle. The ceiling emits florescent lighting when the light supplied from the clear dome window on the eastern wall is insufficient.\n\nPresident Smith's office is to the north.  The lobby is to the west." );

  add_item("desks", "All the desks are of high quality, something an executive would usually have, although they do manage to go well with the room decoratively.  All desks are equipped with state-of-the-art computer terminals.");

  set_objects( 
 DIR+"/monsters/colleen.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x60y20z10.c",
  "west" : DIR+"/rooms/city/x50y10z10.c"
  ]) );
}
