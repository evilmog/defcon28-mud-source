inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 150);
  set_property("y", 430);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Supervisor's Office" );
  set_long( "The supervisor's office is a nice carpeted room. The walls and the furniture are made of genuine wood, giving the place a very very comfortable look. There is even a ceiling fan spinning above you although the room is air-conditioned. The supervisor is obviously someone who likes classical office settings.\n\nYou can leave by going east." );


  set_objects( 
 DIR+"/monsters/r1hannah.c", 
 DIR+"/monsters/cyclophant.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/prisonbasement/x160y430z-10.c"
  ]) );
}
