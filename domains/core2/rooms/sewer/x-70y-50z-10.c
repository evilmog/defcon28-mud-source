inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "You find this pipe to be a rather tight squeeze for you. Still, it is rather dry. However, you do find some moisture and slime on the inner surfaces of this pipe. \n\nThe pipe exits to the north into the excrement converter entrance. Otherwise you can continue to the west in this pipe." );


  set_objects( 
 DIR+"/monsters/slug.c", 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-70y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x-80y-50z-10.c"
  ]) );
}
