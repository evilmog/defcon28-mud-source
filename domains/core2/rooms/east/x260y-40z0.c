inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 260);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Closet" );
  set_long( "This is yet another unused closet, the floor likes like a server rack was in here at one point. You can see the outline in the dust from where it was. Now this room looks completely empty. A button is on the wall." );

  add_item("button", "A purple button, it says 'push me'");
 set_exits( ([
  "east" : DIR+"/rooms/east/x270y-40z0.c"
  ]) );
}
