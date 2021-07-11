inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Snake Lair" );
  set_long( "Bones are all over the place. You notice that they have been stripped clean of all flesh. There also appear to be a huge amount of snakes, most small and harmless, gliding all over this room. The bigger ones look at you, while the smaller ones just ignore you and go about their own businesses. \n\nThe lair is extended to the northwest. To your southeast is a waterway canal. " );


  set_objects( 
 DIR+"/monsters/greensnake.c", 
 DIR+"/monsters/boa.c", 
 DIR+"/monsters/snake.c"
);
 set_exits( ([
  "northwest" : DIR+"/rooms/sewer/x-70y-10z-10.c",
  "southeast" : DIR+"/rooms/sewer/x-50y-30z-10.c"
  ]) );
}
