inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Wading waist-deep through the assorted sewage floating along the rather large main access tunnel, it's all you can do not to add your own puke to the dark murky waters you are in. Considering the stench, the dark area and the cold sewage you are in, your efforts are rather good. \n\nA service duct lies to the south, while the main access tunnel continues to the east and west. A large pipe juts out from the northern wall. " );

  add_item("pipe", "This is a pipe");

  set_objects( 
 DIR+"/monsters/wasteworm.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x80y-50z-10.c",
  "east" : DIR+"/rooms/sewer/x90y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x70y-40z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x80y-30z-10.c",
  ]) );
}
