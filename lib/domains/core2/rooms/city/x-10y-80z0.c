inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -80);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Armour SHop: Level 19 - 20" );
  set_long( "Welcome to the flagship store, sortof, it's really all mass produced crap but its all made of super rare unobtanium mogium. Type list for a list of services." );


  set_objects( 
 DIR+"/monsters/abot_19_20.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/city/x-20y-80z0.c"
  ]) );
}
