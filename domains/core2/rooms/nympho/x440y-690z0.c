inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 440);
  set_property("y", -690);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "Walls are dark, floors are dark, lighting is terrible but the music is fantastic. Dancers and Zombies alike have come together to dance in pure harmony. The screams are somehow timed to the music which makes it even more entertaining. The dancers are way too out of it to even notice the zombies." );


  set_objects( 
 DIR+"/monsters/slowzombie.c", 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/zombie.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/nympho/x430y-690z0.c",
  "northeast" : DIR+"/rooms/nympho/x450y-680z0.c"
  ]) );
}
