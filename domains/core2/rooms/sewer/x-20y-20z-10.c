inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "Your legs are cold and getting soft, the consequence of being soaked knee-deep in cold sewage. However, a draft of warm air tinged with the stench of the sewers brush against your face every now and then, warming both you and the narrow wall which confine you so much.\n\nExits to the other parts of the waterway canal are located to your north and west. You can go to the City dome by heading up." );


  set_objects( 
 DIR+"/monsters/snake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-20y-10z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y-20z-10.c",
  "up" : DIR+"/rooms/city/x-20y-20z0.c"
  ]) );
}
