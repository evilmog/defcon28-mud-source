inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 40);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Lake" );
  set_long( "The lake is not deep, with the waters just up to your chest. But it is icy cold, and although you try to keep warm by moving around a lot, staying still for just a moment starts making you feel cold again. And if you move around too much, you're just bait for whatever creature which is living in the lake... \n\nOne may proceed to the other parts of the lake by heading north or south." );


  set_objects( 
 DIR+"/monsters/blob.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x20y50z-20.c",
  "south" : DIR+"/rooms/sewer/x20y30z-20.c"
  ]) );
}
