inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", 30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Access Point Corridor" );
  set_long( "Reinforced by antivib alloy, the access point corridor you are in is impervious to the vibrations which occur everywhere else near the generator. Illumination comes in the form of soft yellow lights which are embedded into the ceiling.\n\nNortheast is the generator monitoring center. Dirty footprints can be seen on the floor. Maintenance access points can be reached by heading south or west." );


  set_objects( 
 DIR+"/monsters/carson.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x-50y20z0.c",
  "west" : DIR+"/rooms/city/x-60y30z0.c",
  "northeast" : DIR+"/rooms/city/x-40y40z0.c"
  ]) );
}

int do_search(void) {
   this_environment()->setup();
   return 1;
}
