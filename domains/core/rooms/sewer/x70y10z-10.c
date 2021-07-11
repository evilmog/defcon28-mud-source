inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "Glimmerless walls, proper lighting and a dry floor make up this service duct. It appears that the stench of the sewers don't penetrate this place so much, so you actually get a nice breath of air here. \n\nThe service duct continues to the north and east." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x70y20z-10.c",
  "east" : DIR+"/rooms/sewer/x80y10z-10.c"
  ]) );
}
