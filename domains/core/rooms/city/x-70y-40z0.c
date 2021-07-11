inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Human Resources - Corridor" );
  set_long( "This is the main corridor of the human resources department. To the north is the Company testing center where you can raise your stats.  This corridor continues to the east and northwest." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-70y-30z0.c",
  "northwest" : DIR + "/rooms/city/x-80y-30z0.c",
  "east" : DIR+"/rooms/city/x-60y-40z0.c"
  ]) );
}
