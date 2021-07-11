inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The sluggish flow of the dark and brown scum around you isn't that threatening to your balance, but what worries you is the stuff which you are wading in. Who knows what strange chemicals have been expulsed into the Citys sewer system? You try not to think of that as you fortify your stomach and move onwards.\n\nYou may leave either north or south along the main access tunnel." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x10y90z-10.c",
  "south" : DIR+"/rooms/sewer/x10y70z-10.c"
  ]) );
}
