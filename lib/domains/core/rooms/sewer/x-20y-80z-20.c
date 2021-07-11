inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -80);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "The underground atrium feels rather cool although the solar panels above are bearing ultra-violet rays down upon you. With the fresh air provided by the large fern-like plants, you almost feel like you are atop a high mountaintop.\n\nYou can continue west to another part of the atrium. To your southeast is an access shaft." );


  set_objects( 
 DIR+"/monsters/floorvine.c", 
 DIR+"/monsters/floorvine.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/sewer/x-30y-80z-20.c",
  "southeast" : DIR+"/rooms/sewer/x-10y-90z-20.c"
  ]) );
}
