inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office Passage" );
  set_long( "The hard cement floor you are walking on and the plain green-tiled walls indicate a lack of artistic design in this corridor. In fact, this office passage was made so that the higher level reactor crew would have a proper walkway.\n\nTo your southeast lies a conference room. The office passage stretches to the north, while south will take you to the outer generator loop." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-20y80z0.c",
  "south" : DIR+"/rooms/city/x-20y60z0.c",
  "southeast" : DIR+"/rooms/city/x-10y60z0.c"
  ]) );
}
