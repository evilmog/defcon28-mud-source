inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Access Walkway" );
  set_long( "Soft yellow lights embedded into the ceiling illuminate this walkway. A cold draft of air passes by you, cooling your body. Underneath you is the huge fusion generator, so the whole walkway is vibrating a little.\n\nTo your south is the generator monitoring center. The access walkway continues to the north." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-40y60z0.c",
  "south" : DIR+"/rooms/city/x-40y40z0.c"
  ]) );
}
