inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The small lights by the large tunnel's sides are barely enough for one to get around, let alone illuminate the whole place. The dark filthy waters you are wading in seems to be royally offending your sense of smell, but you sense that the stench gets worse to the north.\n\n   To the north is the southeast primary hub, while to the south is another main access tunnel. A large pipe from the east juts out slightly into the tunnel you are in." );

  add_item("pipe", "This is a pipe");

  set_objects( 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x50y-40z-10.c",
  "south" : DIR+"/rooms/sewer/x50y-60z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x60y-50z-10.c",
  ]) );
}
