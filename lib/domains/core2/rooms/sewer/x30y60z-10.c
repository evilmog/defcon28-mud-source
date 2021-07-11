inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Hydro Generator #3" );
  set_long( "Standing in the middle of a huge chamber, you see gigantic tubes filled with cascading water all around you. The immense force of the falling water is spinning a waterwheel, and the waterwheel is generating gerks for the Citys emergency supply through power generators assigned to each tube.\n\nYou can leave by going east." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x40y60z-10.c"
  ]) );
}
