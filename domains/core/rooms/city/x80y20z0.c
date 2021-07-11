inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", 20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Financial District" );
  set_long( "This appears to be a relatively unused section of hallway.  The walls still appear to be brand new with their original white paint.  The grey carpet on the floors also appears to be brand new as well.\n\nThe eastern Mass Transit station for the City dome is toward the southeast, while the heart of the Citys Financial District is far to the west of here." );

 set_exits( ([
  "west" : DIR+"/rooms/city/x70y20z0.c",
  "southeast" : DIR+"/rooms/city/x90y10z0.c"
  ]) );
}
