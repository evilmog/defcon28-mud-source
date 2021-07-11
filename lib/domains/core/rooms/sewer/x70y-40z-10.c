inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Tall and wide, this main access tunnel reminds you of old subway stations, except that the sewage is up to your waist and the stench here is utterly revolting. The small lights affixed to the sides of the tunnel to provide minimal illumination is but a small consolation to the other hardships you have to bear. \n\nThe main access tunnel extends to your east and west. A large sewage pipe juts out from your south. " );

  add_item("pipe", "This is a pipe");
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x80y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x60y-40z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x70y-50z-10.c",
  ]) );
}
