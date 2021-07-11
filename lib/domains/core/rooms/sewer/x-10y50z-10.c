inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "Warm humid air meets you in this old service duct. The walls are all blank and dirty, and patches of slime are all over the place. With the stench of the sewers so strong in here, your only consolation is the fact you are not wading in sewage itself.\n\nA main access tunnel is located to your north. To your west the service duct continues. " );


  set_objects( 
 DIR+"/monsters/rat.c", 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-10y60z-10.c",
  "west" : DIR+"/rooms/sewer/x-20y50z-10.c"
  ]) );
}
