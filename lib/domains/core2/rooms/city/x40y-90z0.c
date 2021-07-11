inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -90);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Immigration Shuttle: base of the exit ramp" );
  set_long( "Here at the base of the drop-shuttle's ramp is a fair amount of chaos amidst the booming engines and shouting of the maintenance crew. A hallway leading away from the shuttle and into the City complex is ahead of you to the north.\n\nThe shuttle's ramp leads up to the immigration shuttle bay behind you, but the bay is closed." );


  set_objects( 
 DIR+"/monsters/magnus.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x40y-80z0.c"
  ]) );
}
