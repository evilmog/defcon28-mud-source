inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 80);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office Passage" );
  set_long( "Designed spartanly to provide the higher level generator crew a proper walkway, the office passage you are in has mundane green-tiled walls and a cement floor. Lightpads in the ceiling provide adequate illumination for you.\n\nYou may continue to the south, west and northeast along the office passage." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x-20y70z0.c",
  "west" : DIR+"/rooms/city/x-30y80z0.c",
  "northeast" : DIR+"/rooms/city/x-10y90z0.c"
  ]) );
}
