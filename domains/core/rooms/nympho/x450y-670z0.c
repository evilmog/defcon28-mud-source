inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 450);
  set_property("y", -670);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "%^RED%^These damned vampires seem to be taking over the club. Terrible synthpop is playing in the background and everybody seems to be smoking cigarettes. The odd human is being devoured but nobody seems to mind. Nobody is drinking alcohol, everybody is drinking coffee in between blood frenzies. Its like a the goths from southpark became vampires and then somehow found their way here.%^RESET%^" );


  set_objects( 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/vampire.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/nympho/x450y-680z0.c",
  "northeast" : DIR+"/rooms/nympho/x460y-660z0.c",
  "southwest" : DIR+"/rooms/nympho/x440y-680z0.c"
  ]) );
}
