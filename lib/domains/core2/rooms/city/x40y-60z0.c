inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Hidden atrium" );
  set_long( "A wall was hastily erected and painted to the northwest to obsure this unfinished section of the atrium. Unlike the other sections of Shay Park, which are arranged according to a general theme, the plants in this room are of many different varieties and styles.\n\nThere's no stone path and it appears that even the gardening drones don't visit this section anymore. This room looks completely neglected, as evidenced by a refuse pile towards the east." );

 set_exits( ([
  "east" : DIR+"/rooms/city/x50y-60z0.c",
  "northwest" : DIR+"/rooms/city/x30y-50z0.c"
  ]) );
}
