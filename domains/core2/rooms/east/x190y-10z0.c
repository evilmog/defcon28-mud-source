inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 190);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Outflow area" );
  set_long( "Pairs of vertically-arranged metallic tubes jut out of the eastern wall. A strong gush of foul-smelling wind is blowing out of the metallic tubes, presumably the circulated air of the dome. The plants here seem to be extremely well-grown and thick, although they look a little sickly. \n\nThe cement walkway forms a circle here amid the thicket, with a path leading to the west." );


  set_objects( 
 DIR+"/monsters/boar.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/east/x180y-10z0.c"
  ]) );
}
