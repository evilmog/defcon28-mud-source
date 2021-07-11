inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -90);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Water Tunnel" );
  set_long( "You move forward in this water tunnel, oblivious to the dark sewer waters swirling around your feet. The air here is rather humid, and you soon find yourself feeling a bit sweaty. \n\nThe water tunnel continues north and south." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-90y30z-10.c",
  "south" : DIR+"/rooms/sewer/x-90y10z-10.c"
  ]) );
}
