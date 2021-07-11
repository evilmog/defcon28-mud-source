inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Dry Pipe" );
  set_long( "You are in a large dry pipe, one of the buffer irrigation pipes which are used to prevent the sewer from flooding out into the City should the water level ever rise too high. It is very big, more than big enough to contain your entire body. \n\nThe pipe continues south. To the west, the pipe exits into a service duct. " );


  set_objects( 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x80y40z-10.c",
  "west" : DIR+"/rooms/sewer/x70y50z-10.c"
  ]) );
}
