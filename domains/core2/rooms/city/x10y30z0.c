inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is a small office, the walls are a dull grey stainless steel and the floor is cheaply carpeted.  Terminals line the walls and there appears to be no desk or chairs or any other method to get comfortable.  The only thing that makes this office bearable is the small plant in the corner." );

  add_item("plant", "A small green fern in a brown ceramic pot.");

  set_objects( 
 DIR+"/monsters/jeff.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x20y30z0.c"
  ]) );
}
