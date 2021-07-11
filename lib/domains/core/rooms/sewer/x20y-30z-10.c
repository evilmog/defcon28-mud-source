inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "You are in a service duct, a clean and dry passageway which is as close to heaven as any place can be in these sewers. There is dust on the stainless steel surfaces of the walls and floor. You suspect that this duct hasn't been used in some time. \n\nYou can go up into the City dome. The service duct continues to the east and the west. " );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x30y-30z-10.c",
  "west" : DIR+"/rooms/sewer/x10y-30z-10.c",
  "up" : DIR+"/rooms/city/x20y-30z0.c"
  ]) );
}
