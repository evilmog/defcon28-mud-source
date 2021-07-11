inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", 200);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "CITY Detention Center -  Main Hall" );
  set_long( "This is the maximum security wing of the Detention Center. From this point on, only Enforcement and the worst of the lot of criminals in the CITY will be found.  The hallway darkens as it leads southwest, while the Detention Center central hub is located back to the northeast. " );

 set_exits( ([
  "northeast" : DIR+"/rooms/prison/x210y210z0.c",
  "southwest" : DIR+"/rooms/prison/x190y190z0.c"
  ]) );
}
