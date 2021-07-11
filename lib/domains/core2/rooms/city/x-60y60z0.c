inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", 60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Outer Generator Corridor" );
  set_long( "You are at the northwest section of the generator which is located in the City dome. White fluorescent lights illuminate the passage, making the curving walls look shiny. A viewport looks down onto the generator.\n\nThe hallway continues to your northeast and southwest." );


  set_objects( 
 DIR+"/monsters/analyst.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/city/x-50y70z0.c",
  "southwest" : DIR+"/rooms/city/x-70y50z0.c"
  ]) );
}
