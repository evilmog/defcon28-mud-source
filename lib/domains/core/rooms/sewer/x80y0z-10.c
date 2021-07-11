inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", 0);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Sewer Passage" );
  set_long( "A relatively broad corridor, this sewer passage is illuminated only by the weird orange glow from the discarded sewer sediment all over the place. You don't feel too insecure about anything here, yet you don't exactly feel very safe either. \n\nThe sewer passage continues to the east and south." );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x80y-10z-10.c",
  "east" : DIR+"/rooms/sewer/x90y0z-10.c"
  ]) );
}
