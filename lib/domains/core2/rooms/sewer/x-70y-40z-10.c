inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "ECC Entrance" );
  set_long( "This is the entrance to the ECC, the Excretion Conversion Centre of the City sewers. Housed within this area are facilities which have been designed to convert excretion and other similar wastes to reusable resources. This is a large white room, with a large inscription embedded on the northern wall.\n\nThe ECC continues to the east and west. A large pipe juts out from the southern wall, your only way out of the centre. " );

  add_item("pipe", "This is a pipe");

  set_objects( 
 DIR+"/monsters/drone.c", 
 DIR+"/monsters/drone.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-60y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x-80y-40z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x-70y-50z-10.c",
  ]) );
}
