inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "All is silent here save the sound of water dripping somewhere and the muffled roar of falling water far away. You wade wearily through the sewage, its surface film clinging to your body as you cut a swathe through the sludge. The smell is nauseating, and you have to make an effort not to add the contents of your stomach to the sewers.\n\nThe main access tunnel extends to your north and south." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-60y40z-10.c",
  "south" : DIR+"/rooms/sewer/x-60y20z-10.c"
  ]) );
}
