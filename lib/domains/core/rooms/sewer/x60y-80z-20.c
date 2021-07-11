inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -80);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "You seem to have stumbled upon a pretty dark area of the atrium. Here, it seems that a few solar panels have shorted out, leaving you in a cool semi-darkness. The fern-like plants all around you offer you very little comfort, especially since all you can hear now is your own hurried breathing.\n\nYou can leave by going north." );


  set_objects( 
 DIR+"/monsters/snapperjaw.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x60y-70z-20.c"
  ]) );
}
