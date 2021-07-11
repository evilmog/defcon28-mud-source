inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 670);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "eastmine" );
  set_short( "East Mine - E Transit" );
  set_long( "This is the end of the line, the walls are falling down and the domes integrity looks questionable at best. The air smells of rotten eggs and dust." );


  set_objects( 
 DIR+"/monsters/guard.c", 
 DIR+"/monsters/guard.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/eastmine/x630y0z0.c",
  "southwest" : DIR+"/rooms/eastmine/x660y-10z0.c"
  ]) );
}
