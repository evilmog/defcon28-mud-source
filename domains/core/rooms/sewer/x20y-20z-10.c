inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Engineers Quarters" );
  set_long( "You are standing in the engineers quarters. Spartan-looking bunks appear to be what the engineers used to sleep on, while a few shelves seem to be where the engineers place their personal belongings. A picture hangs on the northern end of the wall, while an old air-conditioner which has long ceased to function hangs despondently by the eastern wall. \n\nThe exit lies to the west." );


  set_objects( 
 DIR+"/monsters/salik.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/sewer/x10y-20z-10.c"
  ]) );
}
