inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Human Resources - Director's Offices" );
  set_long( "These are the offices of the Director of Human Resources and her assistants. A desk is here that is used by the Director's personal secretary.\n\nTo the east is a plain office, while to the west is a more opulent space that is the Director's office suite. The main corridor is to the south." );


  set_objects( 
 DIR+"/monsters/jenny.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x-80y-20z0.c",
  "east" : DIR+"/rooms/city/x-70y-10z0.c",
  "west" : DIR+"/rooms/city/x-90y-10z0.c"
  ]) );
}
