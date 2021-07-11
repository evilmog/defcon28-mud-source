inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 60);
  set_property("y", -80);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Starport Duty Free Guns" );
  set_long( "Safety regulations strictly enforced by The Company prevent anyone carrying firearms or other personal weapons from boarding the transport shuttle. Local management here at the Hermes 571-G system's colony CORE thoughtfully installed this shop so new arrivals could get re-equipped." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x60y-70z0.c"
  ]) );
}
