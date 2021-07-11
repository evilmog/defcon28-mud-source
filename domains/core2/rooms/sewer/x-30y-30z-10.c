inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "Dirty walls surround you on both sides of the passageway. The sewers seem to have gotten a tight hold on this corridor, for the stench here is as strong as ever even though there is no visible sewage around. \n\nYou can continue east or west along the service duct, or head north into a waterway canal system." );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-30y-20z-10.c",
  "east" : DIR+"/rooms/sewer/x-20y-30z-10.c",
  "west" : DIR+"/rooms/sewer/x-40y-30z-10.c"
  ]) );
}
