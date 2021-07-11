inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Slug Lair" );
  set_long( "This appears to be a lair of some sort. You see slime trails all over the place, and the slugs which made them on almost every surface of this chamber. This appears to be a circular room, with no lights whatsoever. You get the urge to get out quick. Who knows when the slugs will just drop on you? \n\nThe only exit is to the south." );


  set_objects( 
 DIR+"/monsters/queenslug.c", 
 DIR+"/monsters/slug.c", 
 DIR+"/monsters/slug.c", 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-80y20z-10.c"
  ]) );
}
