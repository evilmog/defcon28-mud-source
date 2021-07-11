inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "Smelly and dirty, this service duct is almost as bad as the main access tunnels where all the sewage are. You notice large amounts of sewer water everywhere and even some pieces of organic waste matter. Not a nice place to rest in. \n\nYou can continue west along the service duct. A large pipe from the southern wall drips sewage onto the floor of the duct." );

  add_item("pipe", "This is a pipe");

  set_objects( 
 DIR+"/monsters/slug.c", 
 DIR+"/monsters/slug.c", 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/sewer/x-80y40z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x-70y30z-10.c"
  ]) );
}
