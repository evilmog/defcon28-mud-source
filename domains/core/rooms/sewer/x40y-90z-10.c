inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You wade knee-deep in the sluggish mire of a rather narrow and cramped access passageway. Your head is constantly lowered due to the low ceiling. Somehow, you don't really feel safe here. \n\n   A main access tunnel is to the northeast. To the west this waterway canal continues." );

 set_exits( ([
  "west" : DIR+"/rooms/sewer/x30y-90z-10.c",
  "northeast" : DIR+"/rooms/sewer/x50y-80z-10.c"
  ]) );
}
