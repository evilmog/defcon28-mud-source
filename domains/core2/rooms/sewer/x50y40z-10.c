inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Abandoned Lair" );
  set_long( "A fetid, goatish stench hits you the moment you enter this place. The smell here is much worse than the sewers, and you nearly retch. In the dim light, you can hardly make out a tattered makeshift bunk made out of old trash. There appears to be what looks like bloodstains everywhere, while deep scratches are embedded in the walls. Still, whatever was once here is not around anymore. This place doesn't look like anything has been inside for a long time.\n\nThe only exit is east into the service duct." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x60y40z-10.c"
  ]) );
}
