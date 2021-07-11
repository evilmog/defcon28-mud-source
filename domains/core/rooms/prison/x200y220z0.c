inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", 220);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "CITY Detention Center - Hallway" );
  set_long( "This quiet hallway is a bit dim compared to the rest of the Detention Center.  A bit further up the corridor some loud laughter can be heard, while an almost chilling aura seems to emanate from another room down the hall. " );

 set_exits( ([
  "west" : DIR+"/rooms/prison/x190y220z0.c",
  "southeast" : DIR+"/rooms/prison/x210y210z0.c"
  ]) );
}
