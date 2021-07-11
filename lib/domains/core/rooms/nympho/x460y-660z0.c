inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 460);
  set_property("y", -660);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "%^RED%^Nightclub%^RESET%^" );
  set_long( "Partiers are everywhere. The music is now back to the same old electronic dance music. Its not even good music like mid 90's pre drop trance, its not even house music. Its dubstep, it sounds like robots fornicating in here. Honestly the music is really bad. Since the music is like robots fornicating it appears as if the Humans in the club are doing the same. No vampires, goths, clowns, or even zombies to be found." );


  set_objects( 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/child.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/nympho/x470y-650z0.c",
  "southwest" : DIR+"/rooms/nympho/x450y-670z0.c"
  ]) );
}
