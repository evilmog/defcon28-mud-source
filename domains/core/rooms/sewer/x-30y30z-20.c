inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 30);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Maintenance Corridor" );
  set_long( "Steam from the large pipes which have been layed all around this corridor envelopes you. It is uncomfortably hot here, as the hot evaporated moisture clings to you like a hot blanket. However, you do not seem to find any problems finding your way around here.\n\nThe maintenance corridor extends to the northeast and southeast." );

 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x-20y40z-20.c",
  "southeast" : DIR+"/rooms/sewer/x-20y20z-20.c"
  ]) );
}
