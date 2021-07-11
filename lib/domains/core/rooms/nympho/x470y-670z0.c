inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 470);
  set_property("y", -670);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "This nightclub just seems to keep going forever. The masses of people, the loud music, the air that smells of recreational drugs all seem to meld into one giant throbbing mass." );


  set_objects( 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/nympho/x470y-660z0.c",
  "southwest" : DIR+"/rooms/nympho/x460y-680z0.c"
  ]) );
}
