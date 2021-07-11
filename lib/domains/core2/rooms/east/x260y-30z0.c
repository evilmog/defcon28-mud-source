inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 260);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Clerical Area" );
  set_long( "This is the East Dome's clerical department. It is here where most of the dome's paperwork are sent to. You find this to be an averagely huge room with plain white walls. Numerous clerks bustle around you as they hurry to finish their assigned workload. A spirit of urgency is definitely in the air. \n\nYou can get to other clerical areas by going north. A corridor lies to your west, and to your east is the dome's In/Out office. " );


  set_objects( 
 DIR+"/monsters/eastclerk.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x260y-20z0.c",
  "east" : DIR+"/rooms/east/x270y-30z0.c",
  "west" : DIR+"/rooms/east/x250y-30z0.c"
  ]) );
}
