inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 100);
  set_property("y", -210);
  set_property("z", 0);

  add_area( "south" );
  set_short( "Section:  East End" );
  set_long( "This is the eastern side of housing dome #3. The sight of the people relaxing and enjoying themselves beckons you back west. " );

 set_exits( ([
  "east" : DIR+"/rooms/kore/x170y-210z0.c",
  "west" : DIR+"/rooms/south/x0y-210z0.c"
  ]) );
}
