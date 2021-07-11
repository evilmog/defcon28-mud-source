inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office of Colony Ethics" );
  set_long( "Living in such close quarters with so many other people, ethical behaviour becomes an imperative.  This office observes (spies) on the inhabitants of Core to be sure they are conforming to the strict ethical code they agreed to when first arriving on this planet." );


  set_objects( 
 DIR+"/monsters/manny.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x20y-20z0.c"
  ]) );
}
