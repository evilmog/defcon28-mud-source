inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Hydro Generator Entrance" );
  set_long( "You stand at the entrance of the City sewers hydro generator complex, the place where sewage water is used to generate gerks for use by the City. The stench of the sewers is prevented from penetrating the room and the other rooms beyond here by hidden air filters which form an invisible and totally unnoticeable barrier here. \n\nTo the north is a main access tunnel. The complex continues to the south." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x30y90z-10.c",
  "south" : DIR+"/rooms/sewer/x30y70z-10.c"
  ]) );
}
