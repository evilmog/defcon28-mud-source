inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "A brightly illuminated corridor, this service duct appears to be used primarily for getting around the sewers without getting drenched to the bone. A hidden air ventilator seems to be blowing air from the south, making the duct pleasantly cool. \n\nYou can leave by going south or west." );


  set_objects( 
 DIR+"/monsters/rat.c", 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-20y-90z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y-80z-10.c"
  ]) );
}
