inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Little bubbles explode at the surface of the sluggish mire you're in, contributing their little share to the already terrible stench of the sewers. This main access tunnel seems to be one big unending nightmare to which there is no final exit as you wade through the dirty sewage you are currently waist-deep in.\n\nYou may go either northeast or southwest from here." );

 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x-30y90z-10.c",
  "southwest" : DIR+"/rooms/sewer/x-50y70z-10.c"
  ]) );
}
