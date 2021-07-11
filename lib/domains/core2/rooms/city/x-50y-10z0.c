inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office of Records" );
  set_long( "The Office of Records handles mostly archiving accounting records. The databanks that hold the information are elsewhere in the dome. This office is just to process information requests and to keep hardcopy records of what data is stored where in the massive archival machines." );


  set_objects( 
 DIR+"/monsters/monzema.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x-50y-20z0.c"
  ]) );
}
