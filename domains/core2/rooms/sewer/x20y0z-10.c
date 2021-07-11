inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 0);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "The swift-moving waters at your knees are no threat to you, but you know that should the water level rise, you could actually drown here. The near-darkness which the canal is in doesn't seem to help your situation a bit at all. \n\nYou may move on to the north or the south in the same irrigation sub-system." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x20y10z-10.c",
  "south" : DIR+"/rooms/sewer/x20y-10z-10.c"
  ]) );
}
