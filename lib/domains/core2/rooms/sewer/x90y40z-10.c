inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Abandoned Larder" );
  set_long( " The stale smell is at its peak here. Looking around this dimly-lit room, you are horrified to see mummified remains of body organs, both human and animal types. You realize that someone has been using this room as a larder of sorts to store its food. This place must have been abandoned in haste a long time ago, as there is still a lot of so-called storage food around here. The organs have long decayed away and been mummified.\n\nYour only way out is to the south." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x90y30z-10.c"
  ]) );
}
