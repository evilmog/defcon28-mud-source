inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Hydro Generator #1" );
  set_long( "Tall transparent cylindrical objects surround you. You can see that inside the long tubes, torrents of water are flowing downwards, spinning a large waterwheel as they do so. The waterwheel itself is connected to a large power generator which in turn in linked to the Citys emergency gerk supply. The room itself is large and spacious in the middle, the sides having been taken up by the tubes.\n\nThe exit is located to the south." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x20y70z-10.c"
  ]) );
}
