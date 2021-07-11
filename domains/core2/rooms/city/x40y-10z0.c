inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office of Sanitation Engineering" );
  set_long( "There is no such thing as a garbageman on Core.  All organic matter is valuable and so even bodily waste is recycled and reused.  It is not advisable to ask for what.  This neat and tidy little office keeps track of every liter of organic matter in the dome complex." );


  set_objects( 
 DIR+"/monsters/freddy.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x40y-20z0.c"
  ]) );
}
