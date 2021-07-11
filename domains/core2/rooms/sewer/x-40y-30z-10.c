inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "You are in a service duct, one of the passageways built to facilitate movement in the City sewers. Dirty and dank walls mark this corridor, as if the filth of the sewers actually rise up to darken the once grey walls here. It is rather dark and smelly here. \n\nThe service duct continues to your east. To your south is a main access tunnel. " );


  set_objects( 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-40y-40z-10.c",
  "east" : DIR+"/rooms/sewer/x-30y-30z-10.c"
  ]) );
}
