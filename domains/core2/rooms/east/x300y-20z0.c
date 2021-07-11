inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 300);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Registrar Secretary's Office" );
  set_long( "You are in the office of the East dome registrar's secretary. The smell of lilacs permeate the air here, and the lily-colored walls give this place a warm look. A modest-looking ceiling fan bustles on top of you, bringing a rather strong breeze to the room despite the already-existant air-conditioning system. The secretary's table is set up in the southern part of the office, just in front of the entrance to the registrar's office. \n\nThe exit is to your north. The registrar's office is located to your south. " );


  set_objects( 
 DIR+"/monsters/ursula.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x300y-10z0.c",
  "south" : DIR+"/rooms/east/x300y-30z0.c"
  ]) );
}
