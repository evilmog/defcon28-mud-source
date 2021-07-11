inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", -70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Incinerator Corridor" );
  set_long( "You are in a relatively large corridor. The trash chute extends from the north to the east. There appears to be something special with this corridor, as if it was designed in such a way as to keep out the moistness of the sewers from entering the eastern rooms. \n\nGoing east will take you to the incinerator decks, while the northern exit will take you back to the sewage separator room. " );


  set_objects( 
 DIR+"/monsters/drone.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-70y-60z-10.c",
  "east" : DIR+"/rooms/sewer/x-60y-70z-10.c"
  ]) );
}
