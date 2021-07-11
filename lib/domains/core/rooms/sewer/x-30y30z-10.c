inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Sluice" );
  set_long( "You have come upon a sluice. It is a huge iron grating, held vertical into the water. Looking from the little pathway by the side of the sewer tunnel you are in, you see that the grating is used to regulate the flow of water into the eastern tunnel. It is very dark and cold in here, but at least you're out of the water for awhile. \n\nWhat looks like a water filter is to your east. To the west is a service duct, while to the south is the waterway canal from where all the water is coming from." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-30y20z-10.c",
  "east" : DIR+"/rooms/sewer/x-20y30z-10.c",
  "west" : DIR+"/rooms/sewer/x-40y30z-10.c"
  ]) );
}
