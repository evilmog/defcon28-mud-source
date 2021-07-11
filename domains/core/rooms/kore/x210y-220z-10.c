inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 210);
  set_property("y", -220);
  set_property("z", -10);

  add_area( "kore" );
  set_short( "A Forgotten Corridor" );
  set_long( "This corridor has a layer of dust and dirt on its floor. There is a dampness in the air and you swear you can smell the faint odor of pine needles from the east. There is an access panel back to the west that looks almost like it may be operational. \n\nA half-hidden path leads roughly south to a small alcove." );

 set_exits( ([
  "south" : DIR+"/rooms/kore/x210y-230z-10.c",
  "east" : DIR+"/rooms/kore/x220y-220z-10.c",
  "west" : DIR+"/rooms/kore/x200y-220z-10.c"
  ]) );
}
