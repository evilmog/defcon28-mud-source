inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 220);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Foyer" );
  set_long( "You are standing in the lobby foyer of the North housing dome. The chamber is wide and furniture arranged sparsely around for people to sit around. A host of light panels above you brightly illuminate the foyer, making the glare of the steel wall panels a bit too much to bear.\n\nThe lobby is to the northeast, while a mass-transit station is located to your southwest." );


  set_objects( 
 DIR+"/monsters/domeguard.c", 
 DIR+"/monsters/domeguard.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/north/x20y230z0.c",
  "southwest" : DIR+"/rooms/north/x0y210z0.c"
  ]) );
}
