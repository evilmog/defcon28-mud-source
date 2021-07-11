inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", 80);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office Passage" );
  set_long( "Green-tiled walls surround you as you walk along this office passage. This corridor is used mainly by the higher level generator crew, like the reactor foreman and so on. Running along the length of the ceiling are rectangular lightpads which gives the passage rather bright lighting. \n\nEast takes you further along the office passage. South will lead you to the outer generator loop. " );

 set_exits( ([
  "south" : DIR+"/rooms/city/x-50y70z0.c",
  "east" : DIR+"/rooms/city/x-40y80z0.c"
  ]) );
}
