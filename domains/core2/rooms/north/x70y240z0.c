inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", 240);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "Echoes of your footsteps upon the steel plates which constitute as the floor of this corridor are all over the place. You get the feeling that the situation here is much hotter than it should be, especially since the tell-tale hum of air-conditioners are missing.\n\nTo the east is the dome administration office. Corridors extend to your north and west." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x70y250z0.c",
  "east" : DIR+"/rooms/north/x80y240z0.c",
  "west" : DIR+"/rooms/north/x60y240z0.c"
  ]) );
}
