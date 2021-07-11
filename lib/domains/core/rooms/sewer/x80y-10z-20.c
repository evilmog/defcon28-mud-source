inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", -10);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "You are in a large underground atrium, with large fern-like plants thriving on the ultra-violet rays provided by huge solar panels above and the cool atmosphere of the atrium itself. The floor below you is dark earth, causing you to crunch the earth with every step you take. This seems to be a pretty good place to be, a nice relief from the dark and smelly sewers.\n\nAn access shaft is to your southeast. A small path to the southwest takes you deeper into the atrium." );

 set_exits( ([
  "southeast" : DIR+"/rooms/sewer/x90y-20z-20.c",
  "southwest" : DIR+"/rooms/sewer/x70y-20z-20.c"
  ]) );
}
