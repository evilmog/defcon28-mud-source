inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Main Southeast Corridor" );
  set_long( "This is the eastern most end of the main corridor. To the east is Vice President Grey's office. To the south is the busy starport entrance as well as an atrium for your relaxation and revitalization. The Office of Environmental Quality is to the north. The corridor continues to the west." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x60y-10z0.c",
  "south" : DIR+"/rooms/city/x60y-30z0.c",
  "east" : DIR+"/rooms/city/x70y-20z0.c",
  "west" : DIR+"/rooms/city/x50y-20z0.c"
  ]) );
}
