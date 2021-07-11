inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Dark slimy sediment float on the surface of the dark waters which you are wading in. The stench here is almost unbearable, nearly threatening to suffocate you with its fetidness. The small lights by the sides of the tunnel offer you little comfort, but at least they're bright enough to illuminate the area. \n\nTo the north and the south are main access tunnels. A large pipe juts out from the eastern wall. " );

  add_item("pipe", "This is a pipe");

  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x10y-40z-10.c",
  "south" : DIR+"/rooms/sewer/x10y-60z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x20y-50z-10.c",
  ]) );
}
