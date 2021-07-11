inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 190);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Atrium Walkway" );
  set_long( "On both sides of the cement walkway are thick heavy foliage made out of strange plants which you hardly recognize. The dense plants make this walkway dark, obscuring the soft lightpanels above. Suspended just below the ceiling is a crazy network of iron water sprinklers which run off haphazardly everywhere.\n\nThe atrium entrance lies to your northeast. The walkway also extends to the southeast and southwest." );


  set_objects( 
 DIR+"/monsters/doe.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/east/x200y-10z0.c",
  "southeast" : DIR+"/rooms/east/x200y-30z0.c",
  "southwest" : DIR+"/rooms/east/x180y-30z0.c"
  ]) );
}
