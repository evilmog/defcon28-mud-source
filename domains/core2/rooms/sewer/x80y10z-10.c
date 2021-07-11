inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "The walls of the duct, although faded, are still able to muffle the other sounds of the sewers here. This results in a quiet passageway. The lighting here is good, and you actually get to walk on dry and safe ground. \n\nYou may go either east or west." );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x90y10z-10.c",
  "west" : DIR+"/rooms/sewer/x70y10z-10.c"
  ]) );
}
