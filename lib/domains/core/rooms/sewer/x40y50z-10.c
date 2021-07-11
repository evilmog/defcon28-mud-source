inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Hydro Generator #6" );
  set_long( "All around you are large gigantic transparent tubes. The loud rushing of water down these tubes must be loud, but strangely, they seem to have been silenced by the material which the tubes are made of. You notice waterwheels being spun by the waters in each tube. These waterwheels are linked to power generators, no doubt converting the energy of the rushing waters into gerks for the Citys use.\n\nExit is to the north." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x40y60z-10.c"
  ]) );
}
