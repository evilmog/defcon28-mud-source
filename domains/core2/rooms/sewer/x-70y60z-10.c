inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "Blank and featureless, this service duct seems to be pretty boring and dirty. Puddles of water litter the floor, and only the regular movements of a solitary cockroach are the only signs of life here. \n\nThe service duct continues to the north. To the west is an access shaft. " );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-70y70z-10.c",
  "west" : DIR+"/rooms/sewer/x-80y60z-10.c"
  ]) );
}
