inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "The service duct is dark and smelly, the City sewers' trademark signature which is present in almost all its locations. You notice dirty grey walls and various puddles of water on the floor, your footsteps squishing away each time you step into them. \n\nThe service duct continues to your south. To your northeast is the waste monitoring room. " );


  set_objects( 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-10y-20z-10.c",
  "northeast" : DIR+"/rooms/sewer/x0y0z-10.c"
  ]) );
}
