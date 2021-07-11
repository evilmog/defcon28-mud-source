inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 40);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Lake" );
  set_long( "Though not deep, the bed of the lake is not exactly even either. What feels like shifting sands beneath your feet can suddenly deepen until your entire head is swallowed up by the lake waters, or you could even be sometimes walking with the water at your waist.\n\nYou may proceed north or south from here." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x40y50z-20.c",
  "south" : DIR+"/rooms/sewer/x40y30z-20.c"
  ]) );
}
