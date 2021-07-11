inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Hydro Generator #4" );
  set_long( "Towering high above you in this big room are large transparent tubes filled with water. The falling water is turning a waterwheel in each tube which generates gerks for the City via power generators. You realize that the water in the tubes actually come from the sewer system of the City.\n\nThe only exit is located to the south." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x40y80z-10.c"
  ]) );
}
