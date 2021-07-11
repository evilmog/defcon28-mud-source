inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 110);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Section:  South End" );
  set_long( "You have just entered housing dome #1 through an airlock. This good-sized dome is newly erected which will soon contain housing for mine workers.  You are surrounded by all sorts of construction equipment.  The city is back south.  Proceed north to the housing building." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x0y210z0.c",
  "south" : DIR+"/rooms/city/x0y100z0.c"
  ]) );
}
