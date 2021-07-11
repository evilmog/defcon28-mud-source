inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -50);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Broken Holding Pen" );
  set_long( "All you see are broken iron bars, a lot of scratches on the walls and some dried specks of bloodstains all over the cell. This was formerly a holding pen, its occupant a kind of animal judging from the goatish fetid smell which seems rather strong in here. Whatever was here has long since escaped.\n\nAn access shaft lies to the southwest." );

 set_exits( ([
  "southwest" : DIR+"/rooms/sewer/x30y-60z-20.c"
  ]) );
}
