inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 100);
  set_property("y", 210);
  set_property("z", 0);

  add_area( "north" );
  set_short( "East End" );
  set_long( "This is the eastern side of housing dome #1.  You carefully step around scraps of metal and try to avoid the working pieces of machinery.  You can inspect the housing building back west.\nThe beginnings of a nicer corridor lies to the northwest." );

 set_exits( ([
  "east" : DIR+"/rooms/prison/x170y210z0.c",
  "west" : DIR+"/rooms/north/x0y210z0.c",
  "northwest" : DIR+"/rooms/north/x90y220z0.c"
  ]) );
}
