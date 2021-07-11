inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "The main access tunnel seems to stretch endlessly to either end. The inadequate lights by the sides of the tunnel do little to illuminate it, and the ends of the tunnel are actually shrouded in darkness as you strain your eyes towards the far reaches of this gargantuan tube. \n\nThe main access tunnel continues to your northwest and southeast. You can also enter the City dome by heading up from here. " );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "northwest" : DIR+"/rooms/sewer/x-30y-60z-10.c",
  "southeast" : DIR+"/rooms/sewer/x-10y-80z-10.c",
  "up" : DIR+"/rooms/city/x-20y-70z0.c"
  ]) );
}
