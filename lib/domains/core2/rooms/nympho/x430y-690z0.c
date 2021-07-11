inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 430);
  set_property("y", -690);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "The zombie infestation appears to be getting worse here. There are more zombies than there are dancers. The music is now a techno remix of total eclipse of the heart. The room is still dimly lit by bad uv lighting." );


  set_objects( 
 DIR+"/monsters/slowzombie.c", 
 DIR+"/monsters/slowzombie.c", 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/child.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/nympho/x430y-680z0.c",
  "east" : DIR+"/rooms/nympho/x440y-690z0.c"
  ]) );
}
