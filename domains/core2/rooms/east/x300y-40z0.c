inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 300);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Closet" );
  set_long( "This looks like some sort of maintenance closet, cables are all over here and dust filles the air." );

  add_item("cables", "Junky looking cables, not the button you are looking for.");
 set_exits( ([
  "west" : DIR+"/rooms/east/x290y-40z0.c"
  ]) );
}
