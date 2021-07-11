inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Shay Park" );
  set_long( "The lush jungle-like plants to the east begin to abate here giving way to grasses, like that of a steppe. This gives the area an odd look because not only are there no grazing animals, you can see the two walls come together in a corner, despite the flicker-cladding wall covering designed to simulate a distant horizon.\n\nThe narrow stepping stone paths lead to the east and south." );


  set_objects( 
 DIR+"/monsters/fieldmouse.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x30y-40z0.c",
  "east" : DIR+"/rooms/city/x40y-30z0.c"
  ]) );
}
