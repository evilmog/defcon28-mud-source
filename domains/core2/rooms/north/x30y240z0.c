inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 240);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Reception" );
  set_long( "The North Dome reception is a roundish room with soft light coming from light panels embedded into the ceiling. A huge table is located here, behind which usually sits the receptionist whos job is to welcome the workers assigned to live in this dome and assign them their quarters. Although the domes air-conditioning system is on the blink, you detect a certain coolness in this area." );


  set_objects( 
 DIR+"/monsters/lil.c"
);
 set_exits( ([
  "southwest" : DIR+"/rooms/north/x20y230z0.c"
  ]) );
}
