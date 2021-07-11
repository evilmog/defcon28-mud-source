inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "The plain stainless steel walls and the iron rungs in this room guarantee that this is an access shaft. This is how authorized Company personnel get from one level of the sewers to another. \n\nThis access shaft leads down. To the north is a main access tunnel, while a waterway canal is to the east. " );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x10y-80z-10.c",
  "east" : DIR+"/rooms/sewer/x20y-90z-10.c",
  "down" : DIR+"/rooms/sewer/x10y-90z-20.c"
  ]) );
}
