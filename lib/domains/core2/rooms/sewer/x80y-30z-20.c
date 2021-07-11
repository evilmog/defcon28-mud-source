inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", -30);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "You are on a small path made of dark earth in a large atrium. The high ceilings are occupied by solar panels which shine ultra-violet rays on the large fern-like plants all around you. The leaves of the plants are very huge, and you guess that their oxygen production ratio must be high too.\n\nThe path to your northwest lead deeper into the atrium. The northeast path takes you to an access shaft." );

 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x90y-20z-20.c",
  "northwest" : DIR+"/rooms/sewer/x70y-20z-20.c"
  ]) );
}
