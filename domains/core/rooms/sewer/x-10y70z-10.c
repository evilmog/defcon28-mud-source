inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Abandoned Trophy Room" );
  set_long( "Complete skeletons of all manner of sewer creatures adorn the walls of this huge room. You recognize the skeleton of a rat, snake, alligator and even that of a human hanging from the walls like a trophy. There are more skeletons around here, but you can not seem to recognize them at all. Could there be more to the sewers than you have seen?\n\nThe lair extends to the north and west." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-10y80z-10.c",
  "west" : DIR+"/rooms/sewer/x-20y70z-10.c"
  ]) );
}
