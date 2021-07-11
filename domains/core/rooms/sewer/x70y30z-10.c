inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "Your footfalls are muffled as you walk through this service duct. It is clean by sewer standards, although you can still smell a whiff of the sewers from where you are. You actually feel relatively safe in this area. \n\nExits are to the north and south." );


  set_objects( 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x70y40z-10.c",
  "south" : DIR+"/rooms/sewer/x70y20z-10.c"
  ]) );
}
