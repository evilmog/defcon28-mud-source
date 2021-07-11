inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", 40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Outer Generator T-junction" );
  set_long( "The low hum of the generator seems to vibrate the T-junction you are in slightly. The floor, though cold and hard, seems to send up vibrations into your body. This T-junction is very brightly illuminated by the round white lights in the ceiling.\n\nThe corridor leads to the north and to the south, and a small raised hallway heads east over the generator underneath and into the central monitoring station." );


  set_objects( 
 DIR+"/monsters/grunt.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x-70y50z0.c",
  "south" : DIR+"/rooms/city/x-70y30z0.c",
  "east" : DIR+"/rooms/city/x-60y40z0.c"
  ]) );
}
