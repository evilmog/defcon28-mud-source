inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office of the Controller" );
  set_long( "The Controller oversees all financial decisions and all accounting operations here on Core. He is an Earth agent who is relieved by a replacement every 6 months. It is thought that this will prevent corruption. This office is far more plush than the others along this corridor. Real wood furniture and live potted plants give you an idea of the ranking within the Company of the Controller. There is an access panel to the south that leads to the corridor. " );


  set_objects( 
 DIR+"/monsters/josef.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x-60y-20z0.c"
  ]) );
}
