inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 220);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "you are in a hot corridor which is made out of blank steel walls. The light here is a little too bright, and due to the fact that the air-conditioner seems to have broken down, you find yourself sweating rather profusely. \n\nThe corridor extends to your east, while the lobby is located to your northwest." );


  set_objects( 
 DIR+"/monsters/repairdroid.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/north/x40y220z0.c",
  "northwest" : DIR+"/rooms/north/x20y230z0.c"
  ]) );
}
