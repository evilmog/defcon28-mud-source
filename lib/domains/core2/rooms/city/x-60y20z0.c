inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", 20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Outer Generator Corridor" );
  set_long( "You are at the southwestern corridor of the loop which runs around the generator. The walls, reflecting the light of the ceiling lights, seem shiny. The floor is cold and hard, made out of the same granite-and-alloy material of the walls. A viewport in the inner wall peeks at the generator beneath.\n\nYou can head northwest or southeast along this corridor." );

 set_exits( ([
  "northwest" : DIR+"/rooms/city/x-70y30z0.c",
  "southeast" : DIR+"/rooms/city/x-50y10z0.c"
  ]) );
}
