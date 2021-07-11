inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You move along the waterway canal system, a dark and narrow series of interconnected tunnels used to contain extra water in the event of a flood. You have no means of a swift escape from here, so getting caught here when a flood starts will result in a watery death. \n\nA sluice lies to your north. The waterway canal continues to your east and west." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-30y30z-10.c",
  "east" : DIR+"/rooms/sewer/x-20y20z-10.c",
  "west" : DIR+"/rooms/sewer/x-40y20z-10.c"
  ]) );
}
