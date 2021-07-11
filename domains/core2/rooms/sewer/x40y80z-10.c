inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Generator Corridor" );
  set_long( "This clean and bright corridor is a brief respite from the darkness and unholy stench of the sewers outside the hydro generator complex. Blue stripes in the middle of the walls provide a soft blue glow which seems to have a peaceful and serene quality about it. \n\nTo your north, a large metal arch leads into one of the hydro generators. To your south is a hub of the generator complex." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x40y90z-10.c",
  "south" : DIR+"/rooms/sewer/x40y70z-10.c"
  ]) );
}
