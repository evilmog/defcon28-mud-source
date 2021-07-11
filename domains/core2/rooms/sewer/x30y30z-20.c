inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 30);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Lake" );
  set_long( "The pillars supporting the ceiling from the bed of the lake appear to be made of some strong kind of stony substance. The ice cold waters are as still as could be, the only movement being yours which is causing ripples to hurtle across the surface of the lake.\n\nThe lake extends to the south, east and west." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x30y20z-20.c",
  "east" : DIR+"/rooms/sewer/x40y30z-20.c",
  "west" : DIR+"/rooms/sewer/x20y30z-20.c"
  ]) );
}
