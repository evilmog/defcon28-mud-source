inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 380);
  set_property("y", -680);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Flower Shoppe" );
  set_long( "This looks like the remains of a flower shoppe. Broken vases are everywhere, the place smells of death and mold. Blood stains are all over the floor." );

 set_exits( ([
  "east" : DIR+"/rooms/nympho/x390y-680z0.c"
  ]) );
}
