inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Generator Surveillance Room" );
  set_long( "Cool air flows down from an air vent somewhere. The room is quite dark, with the only lights being the glows of the many terminals around here. The terminals all record the conditions of the hydro generators present in the sewers. There are no chairs or other creature comforts here. This is a fully-automated surveillance centre. \n\nThe exit is to the east, back into one of the generator corridors." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x60y80z-10.c"
  ]) );
}
