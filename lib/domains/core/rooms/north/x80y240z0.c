inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", 240);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Dome Administration Office" );
  set_long( "A chill of cold air passes by you. The air-conditioners in this room actually works! As you look around the dimly-illuminated room, you notice that the floor is lavishly covered with a fine red expensive-looking carpet. Light comes from a few rounded lights on the ceiling. At the northern end of this room is a huge oak table, behind which sits the dome administrator when she is working.\n\nThe exit is located to your west. To your east is what appears to be an executive toilet." );


  set_objects( 
 DIR+"/monsters/wendy.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/north/x90y240z0.c",
  "west" : DIR+"/rooms/north/x70y240z0.c"
  ]) );
}
