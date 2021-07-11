inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -70);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "It is pretty dark in here, the reason being quite a number of the solar panels in this area have gone out. You push pass the large leaves as you move cautiously along the path, wary of the slightest hint of danger. Still, the thick foliage prove to be almost impenetrable to your senses, what with the fern-like plants being so gigantic and all. \n\nPaths leading northwest and southwest seem to take you to brighter areas of the atrium. The path heading east seems to be taking you into much darker territory." );


  set_objects( 
 DIR+"/monsters/snapperjaw.c", 
 DIR+"/monsters/snapperjaw.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x40y-70z-20.c",
  "northwest" : DIR+"/rooms/sewer/x20y-60z-20.c",
  "southwest" : DIR+"/rooms/sewer/x20y-80z-20.c"
  ]) );
}
