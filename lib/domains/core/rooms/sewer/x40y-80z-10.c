inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "The waterway canal seems to end here. A small sluice in the corner of the canal traps the sewage here, allowing only the waters to flow down to some lower tunnel. You realize that the sewer waters here are much deeper than the other canals. \n\nThe exit is to the west." );


  set_objects( 
 DIR+"/monsters/boa.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/sewer/x30y-80z-10.c"
  ]) );
}
