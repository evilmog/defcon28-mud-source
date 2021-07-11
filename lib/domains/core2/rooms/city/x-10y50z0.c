inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Outer Generator Corridor" );
  set_long( "Along the outer corridors of the fusion generator, you see one of the many viewports which look down upon the generator itself. Round white fluorescent lights illuminate the area, with the walls which are made out of a mixture of granite and some unknown alloy reflecting the light.\n\nYou may continue northwest along the corridor. Otherwise you can head south to a T-junction." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x-10y40z0.c",
  "northwest" : DIR+"/rooms/city/x-20y60z0.c"
  ]) );
}
