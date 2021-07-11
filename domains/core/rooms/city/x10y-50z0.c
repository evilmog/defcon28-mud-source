inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office of Information Technology" );
  set_long( "Next to metal ore, information is one of the most important products The Company sells.  Earth-locked companies who work with metals find The Company's data on off-world smelting, refining, and forming to be extremely valuable.  Many have even duplicated conditions found on Core to ensure quality and consistency when using the processes. Dusty footprints are on the floor." );


  set_objects( 
 DIR+"/monsters/norman.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x20y-50z0.c"
  ]) );
}

int do_search(void) {
   this_environment()->setup();
   return 1;
}
