inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "The dull grey walls pass by you as you move along this service duct, guided on your way by the bright lights on the ceiling. Air coming from a hidden air ventilator somewhere to your west is blowing nice cool wind at you. \n\nExits to other parts of this service duct are located to you north and west. " );


  set_objects( 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-20y-80z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y-90z-10.c"
  ]) );
}
