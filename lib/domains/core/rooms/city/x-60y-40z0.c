inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Human Resources - Corridor" );
  set_long( "This is the eastern most end of the human resources department. To the south is an office where you can sign up for special assignments that can help advance your career. This corridor continues to the west." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x-60y-50z0.c",
  "west" : DIR+"/rooms/city/x-70y-40z0.c"
  ]) );
}
