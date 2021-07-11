inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 170);
  set_property("y", -210);
  set_property("z", 0);

  add_area( "kore" );
  set_short( "KORE West Transit" );
  set_long( "This is the mass transit area at the west side of the KORE Radio dome.\n\n%^CYAN%^West: South Housing Dome\n%^CYAN%^East: KORE Dome Center\n%^RESET%^" );

 set_exits( ([
  "east" : DIR+"/rooms/kore/x210y-210z0.c",
  "west" : DIR+"/rooms/south/x100y-210z0.c"
  ]) );
}
