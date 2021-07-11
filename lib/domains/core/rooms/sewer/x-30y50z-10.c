inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "You are in an old service duct, one of the passageways so that the sewer engineers won't have to constantly wet themselves in the muck of the main access tunnels. So far, this dark and smelly duct doesn't seem to be any different from the other tunnels save its dryness. \n\nYou can continue either to your east or west." );


  set_objects( 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-20y50z-10.c",
  "west" : DIR+"/rooms/sewer/x-40y50z-10.c"
  ]) );
}
