inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Company Office" );
  set_long("This is an empty unused store, nothing remains of the once great empire that was stationed here.");

 set_exits( ([
  "west" : DIR+"/rooms/city/x-20y-20z0.c"
  ]) );
}
