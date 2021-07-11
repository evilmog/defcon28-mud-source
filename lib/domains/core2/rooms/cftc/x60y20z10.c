inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", 20);
  set_property("z", 10);

  add_area( "cftc" );
  set_short( "L.T. Smith: President Smith's Office" );
  set_long( "The office of President L.T. Smith.  A huge mahogany desk with a cherry finish stands prominently in the center of the room, a very comfortable looking executive chair behind it.  Five large couches surround an oak table with a glass top.  Several stools sit at the bar on the east wall.\n\nThe trade office is to the south." );

  add_item("couches", "The couches surround the table in a pentagon shape.  They are very dark blue-green in color.");
  add_item("table", "The table is oak, darkly finished. A glass top holds a few magazines and a tray of candy.");
  add_item("desk", "President Smiths desk emanates power.  It has many drawers.  A flat screen monitor sits proudly upon it.");

  set_objects( 
 DIR+"/monsters/smith.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/cftc/x60y10z10.c"
  ]) );
}
