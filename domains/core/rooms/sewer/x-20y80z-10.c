inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Abandoned Launch Area" );
  set_long( "This sparse-looking room has only one feature in it besides the cold stone walls. In the northern wall is a huge hole, something which has been clawed into the wall. It appears that this would make a very good escape route should something get cornered in the lair area. There is much dried blood here, something which is prevalent in this lair area.\n\nA watering hole is to your east, while a horrible rotting stench is coming from your west." );


  set_objects( 
 DIR+"/monsters/monitor.c", 
 DIR+"/monsters/monitor.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-10y80z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y80z-10.c"
  ]) );
 set_hidden_exits( ([
  "hole" : DIR+"/rooms/sewer/x-20y90z-10.c",
  ]) );
}
