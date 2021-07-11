inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Absorption Control" );
  set_long( "Absorption control is where delegation of the various gasses which are produced from the excretion are controlled. You see row upon row of dials and valves, all indicating different functions which are related to the work done here. The lighting is pretty bright, and in this sparsely furnished room, you actually get a little blinded from the reflection against the white walls. There are also a few consoles which actually delegate the gasses around. \n\nThe exit is located to the southeast." );

 set_exits( ([
  "southeast" : DIR+"/rooms/sewer/x-60y-40z-10.c"
  ]) );
}
