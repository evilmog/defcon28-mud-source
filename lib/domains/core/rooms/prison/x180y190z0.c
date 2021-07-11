inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 180);
  set_property("y", 190);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "CSCC head operations office" );
  set_long( "This is the CSCC head operations office, for closed or working on cases. The room has just enough light to see without any problems.  There is a CSCC logo on a black desk in this office that sits infront of a rather large Abernon.  Four rather large and protective CSCC agents stand guard at the door.  There is a case with a shotgun in it in the wall behind the desk, and a large computer terminal against the south side of the wall. " );


  set_objects( 
 DIR+"/monsters/csccagent.c", 
 DIR+"/monsters/csccagent.c", 
 DIR+"/monsters/csccagent.c", 
 DIR+"/monsters/csccagent.c", 
 DIR+"/monsters/varysstark.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/prison/x180y200z0.c"
  ]) );
}
