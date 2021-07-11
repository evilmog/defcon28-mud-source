inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -310);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "west" );
  set_short( "West Housing: W Transit" );
  set_long( "This atmosphere in this luxurious housing dome drips extravagance with an artificial sky and computer controlled weather patterns.  You feel a slight breeze against your face and can smell a hint of ocean.  Up above you a bright moon illuminates all.  A few elite miners are making their way to the mining dome west of here." );

 set_exits( ([
  "east" : DIR+"/rooms/west/x-210y0z0.c",
  "west" : DIR+"/rooms/westmasstransit/x-420y0z0.c"
  ]) );
}
