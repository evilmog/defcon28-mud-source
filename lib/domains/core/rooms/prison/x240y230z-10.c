inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 240);
  set_property("y", 230);
  set_property("z", -10);

  add_area( "prison" );
  set_short( "CITY Detention Center - Holding Cell" );
  set_long( "This small room contains the bail panel for the prison system. Justice being what it is in this day and age, if you can afford pay your way out, you're a free man.  Otherwise, the shower room awaits you. " );

 set_exits( ([
  "south" : DIR+"/rooms/prison/x240y220z-10.c"
  ]) );
}
