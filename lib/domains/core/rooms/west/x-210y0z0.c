inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -210);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "west" );
  set_short( "West Housing: Center" );
  set_long( "This is the center of the massive West Housing dome. Only the finest, hardest-working, and most dedicated miners are assigned to live within this complex.  You see a few of them making their way to the mining dome west of here." );

 set_exits( ([
  "east" : DIR+"/rooms/west/x-110y0z0.c",
  "west" : DIR+"/rooms/west/x-310y0z0.c"
  ]) );
}
