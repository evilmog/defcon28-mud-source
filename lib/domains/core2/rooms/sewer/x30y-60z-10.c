inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "This is an access shaft which transports Company personnel between the City's sewers and the other parts of the City dome. It is vertical, with walls of plain steel.\n\nIron rungs lead downwards, while you can smell the distinct stench of the sewers coming from the passage heading north." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x30y-50z-10.c",
  "down" : DIR+"/rooms/sewer/x30y-60z-20.c"
  ]) );
}
