inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "The walls and low ceiling of this part of the waterway canal seems to have a thin filament of slime all over them. Here, the strong smell of methane permeates through the air you breath. The water level is up to your waist, and you keep getting the constant feeling of being watched by something. \n\nYou may continue south or west into the other parts of this waterway canal system. A chamber which looks like a lair is located to your southwest. " );


  set_objects( 
 DIR+"/monsters/watersnake.c", 
 DIR+"/monsters/watersnake.c", 
 DIR+"/monsters/snake.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-10y-60z-10.c",
  "west" : DIR+"/rooms/sewer/x-20y-50z-10.c",
  "southwest" : DIR+"/rooms/sewer/x-20y-60z-10.c"
  ]) );
}
