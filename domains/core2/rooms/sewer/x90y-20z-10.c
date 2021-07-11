inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "The access shaft is a rather modest affair, just a small room with plain steel walls and the shaft itself. It is through this shaft that Company personnel travel between the different levels of the sewers. \n\nIron rungs lead downwards into the darkness below. To the north is a sewer passage. " );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x90y-10z-10.c",
  "down" : DIR+"/rooms/sewer/x90y-20z-20.c"
  ]) );
}
