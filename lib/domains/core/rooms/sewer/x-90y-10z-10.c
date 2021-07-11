inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -90);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Geothermal Converter #2" );
  set_long( "The huge bulk of the converter fills your sight as you look around this chamber. The loud hum vibrates the whole place, while bright lights on the ceiling beat down on you. This room is huge, very huge, yet you have only a little space to move around due to the containment of the large converter in the middle of it. Some consoles are packed tightly into the northern wall, the converter's control system. \n\nYou may leave by heading south into the converter master control room." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-90y-20z-10.c"
  ]) );
}
