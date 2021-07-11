inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 260);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "Being large enough to accommodate three humans walking abreast, the corridor you are in is otherwise pretty featureless save for a single blue line running along its entire length.\n\nThe corridor extends to your east and northeast. Alternatively, you may head northwest to the dome's public relations office." );

 set_exits( ([
  "east" : DIR+"/rooms/east/x270y-50z0.c",
  "northeast" : DIR+"/rooms/east/x270y-40z0.c",
  "northwest" : DIR+"/rooms/east/x250y-40z0.c"
  ]) );
}
