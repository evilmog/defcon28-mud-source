inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Water Tunnel" );
  set_long( "A very humid place, this water tunnel is crawling with moss and mold, especially on its walls. To make matters worse, the cold sewage which is covering your feet is threatening to give you rheumatism." );


  set_objects( 
 DIR+"/monsters/slug.c", 
 DIR+"/monsters/slug.c", 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-80y30z-10.c",
  "south" : DIR+"/rooms/sewer/x-80y10z-10.c"
  ]) );
}
