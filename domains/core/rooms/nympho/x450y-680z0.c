inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 450);
  set_property("y", -680);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "%^RED%^The lights have shifted from UV to Red. Numerous creatures are in this area. You can't tell if its a goth convention or if the vampires are in town. The Humans don't seem to notice. The music is still extremely loud so that nobody can hear you scream.%^RESET%^" );


  set_objects( 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/vampire.c", 
 DIR+"/monsters/vampire.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/nympho/x450y-670z0.c",
  "east" : DIR+"/rooms/nympho/x460y-680z0.c",
  "southwest" : DIR+"/rooms/nympho/x440y-690z0.c"
  ]) );
}
