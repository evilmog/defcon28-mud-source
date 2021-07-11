inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 40);
  set_property("z", 10);

  add_area( "city" );
  set_short( "CFTC Administration: Director Greptags Office" );
  set_long( "The office of CFTC Directory FirstFuzz Greptag. Stacks of papers sit upon the large desk in the center of the room.  A computer monitor sits on the desk in front of the executive leather chair.  A few blue couches are in front of the desk, a table between them.  On the west wall, a smaller desk is under a strong light.  A plaque on the desk reads, %^HYELLOW%^SECURITY%^RESET%^." );


  set_objects( 
 DIR+"/monsters/neelo.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x50y30z10.c"
  ]) );
}
