inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "Much deeper than the other parts of the canal, this place is packed with garbage. You notice a little sluice here trapping the physical waste back, allowing only the black sewage water to flow down to the lower levels. \n\nThe only exit is to the east." );


  set_objects( 
 DIR+"/monsters/constrictor.c", 
 DIR+"/monsters/constrictor.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x30y-80z-10.c"
  ]) );
}
