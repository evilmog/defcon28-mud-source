inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", 430);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "REACTOR ONE Reception Area." );
  set_long( "White walls and black floors meet your eyes as you enter the reception area of REACTOR ONE, the Prison's main reactor facility. It is a large well-kept room, furnished only with furniture which is black in color. There is a large reception table in the middle of the room.\n\nTube-like corridors extend to your north and your west, while heading northwest will take you to the reactor decks around REACTOR ONE itself.\n\nThe hatch leading to the Prison turbolift is to the southeast." );

  add_item("table", "This is a state-of-the-art reception table. It has all the latest quirks in reception table technology which ranges from a hologram communicator to a mini television. Unfortunately, these facilities are only available to the receptionist in charge.");

  set_objects( 
 DIR+"/monsters/cyclophant.c", 
 DIR+"/monsters/cyclophant.c", 
 DIR+"/monsters/buddypetersen.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/prisonbasement/x200y440z-10.c",
  "west" : DIR+"/rooms/prisonbasement/x190y430z-10.c",
  "northwest" : DIR+"/rooms/prisonbasement/x190y440z-10.c",
  "southeast" : DIR+"/rooms/prisonbasement/x210y420z-10.c"
  ]) );
}
