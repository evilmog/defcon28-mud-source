inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 430);
  set_property("y", -680);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Nightclub" );
  set_long( "The walls are all covered in neon uv reactive paint and the dance floor is filled with zombies and people. Once in a while a zombie bites a person but because its dark and everybody is drunk nobody notices. The music in this area has changed to a mid 90's eurodance variant known as CanaDance. This might just be Emjay - Flying to the Moon." );


  set_objects( 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/dancer.c", 
 DIR+"/monsters/zombie.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/nympho/x430y-670z0.c",
  "south" : DIR+"/rooms/nympho/x430y-690z0.c",
  "east" : DIR+"/rooms/nympho/x440y-680z0.c"
  ]) );
}
