inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -90);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "Cold, blank and generally featureless, the access shaft is how Company personnel commute between the different levels of the sewers. You seem to be at the bottom level of this shaft.\n\nAn iron ladder leads up to the top level of the shaft. Exits to your northeast and northwest take you to what appears to be underground atriums." );

 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x-30y-80z-20.c",
  "northwest" : DIR+"/rooms/sewer/x-50y-80z-20.c",
  "up" : DIR+"/rooms/sewer/x-40y-90z-10.c"
  ]) );
}
