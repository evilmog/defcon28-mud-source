inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", -220);
  set_property("z", 0);

  add_area( "kore" );
  set_short( "KORE maintenance closet." );
  set_long( "A small storage closet used for cleaning supplies and minor maintenance functions.  It is quite dusty in there, so it looks like nobody's been in here since the aftermath of the cruise missile accident of June 2649.\n\nThere's a clunky old turbolift in the corner that leads down to an additional storage area." );


  set_objects( 
 DIR+"/monsters/koretech.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/kore/x210y-210z0.c",
  "down" : DIR+"/rooms/kore/x200y-220z-10.c"
  ]) );
}
