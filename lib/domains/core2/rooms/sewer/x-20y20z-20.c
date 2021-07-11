inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 20);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Maintenance Corridor" );
  set_long( "Large pipes adorn the ceiling and the sides of the hot maintenance corridor you are in. Dodging occasionally to avoid the hot bursts of steam from the pipes, you realize that although the amount of steam in the air is a lot, your vision is not that obstructed at all.\n\nYou may venture to your east and northwest along this hot and steamy maintenance corridor." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-10y20z-20.c",
  "northwest" : DIR+"/rooms/sewer/x-30y30z-20.c"
  ]) );
}
