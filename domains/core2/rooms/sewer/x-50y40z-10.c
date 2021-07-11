inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "The service duct seems to be crawling with a million unseen germs, judging from the way your skin is constantly tingling here. The lack of light and puddles of dirty water all add to increase your paranoia and panic. Who knows what diseases are running rampant here? \n\nYou may continue onwards to your north or south." );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-50y50z-10.c",
  "south" : DIR+"/rooms/sewer/x-50y30z-10.c"
  ]) );
}
