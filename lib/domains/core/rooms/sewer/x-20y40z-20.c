inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 40);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Maintenance Corridor" );
  set_long( "Your footsteps are drowned by the loud hissing of steam coming out from the pipes around you. Intermittent bursts of the hot evaporated moisture cloud up the area, but not to a point where you lose your vision. As it is, the heat is bearable, but just barely.\n\nExits are to the east and southwest." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-10y40z-20.c",
  "southwest" : DIR+"/rooms/sewer/x-30y30z-20.c"
  ]) );
}
