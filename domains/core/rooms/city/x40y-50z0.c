inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Shay Park" );
  set_long( "This portion of the park is mostly desert-like in climate and flora. The short bushes and cacti are prickly with their well designed defenses against water seeking predators.\n\nThe stepping stone path runs east-to-west." );


  set_objects( 
 DIR+"/monsters/iguana.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x50y-50z0.c",
  "west" : DIR+"/rooms/city/x30y-50z0.c"
  ]) );
}
