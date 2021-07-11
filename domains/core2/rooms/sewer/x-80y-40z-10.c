inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "ECC Corridor" );
  set_long( "A white-walled corridor which stretches far and long. Intermittent light panels on the ceiling give this corridor proper lighting, and the cold cement floor causes your footsteps to echo emptily around.\n\nThe ECC entrance is to your east. To your north and west are other corridors." );


  set_objects( 
 DIR+"/monsters/probe.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-80y-30z-10.c",
  "east" : DIR+"/rooms/sewer/x-70y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x-90y-40z-10.c"
  ]) );
}
