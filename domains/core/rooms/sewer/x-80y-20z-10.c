inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Geothermal Converter #1" );
  set_long( "The loud hum of the geothermal converter resonates throughout the entire chamber. It is a large room indeed you are in, with the huge converter located directly in the middle. The vast ceiling is plastered with bright light panels, so illumination is not a problem here. A few consoles are packed close to each other near the northern wall, no doubt the control system for the converter. \n\nExit to the corridor is to your south." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-80y-30z-10.c"
  ]) );
}
