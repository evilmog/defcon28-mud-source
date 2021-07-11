inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 420);
  set_property("y", -630);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nympho Lobby" );
  set_long( "You are in the NymphoDome Lobby: a room pleasing to the eye for more reasons than one.  Complementing the room's pleasant decor, the occupants include both genders from all races.  The lobby is at the hub of access to the facilities in the Nympho dome: from the casino to the beach.\n\nA sign has been posted here." );

  add_item("sign", "The Nympho Dome is currently undergoing renovations.  As such, certain areas may be made inaccessible without notice while construction teams are given access to the sites.  Please be patient.");
 set_exits( ([
  "north" : DIR+"/rooms/nympho/x420y-560z0.c",
  "southeast" : DIR+"/rooms/nympho/x430y-640z0.c",
  "southwest" : DIR+"/rooms/nympho/x410y-640z0.c"
  ]) );
}
