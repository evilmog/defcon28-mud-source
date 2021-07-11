inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The sewage here is up to your waist, keeping you cold and slimy below while choking you with its foul stench above. You can hardly see where you are going, what with only little light panels used to illuminate a giant-sized tunnel. To make matters worse, you find that you have to keep to the sides of the tunnel to make full use of what little light you have here. \n\nTo the north and south the main access tunnel continues. The end of a large pipe juts out from the western wall." );

  add_item("pipe", "This is a pipe");
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-60y60z-10.c",
  "south" : DIR+"/rooms/sewer/x-60y40z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x-70y50z-10.c",
  ]) );
}
