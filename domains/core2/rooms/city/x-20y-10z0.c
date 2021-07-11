inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office of Payroll Services" );
  set_long( "This is the office of the Payroll Master who assures the correct wages are paid out to all Company employees, especially those working in the mines. The PM also deducts various taxes, insurances, etc. from your earnings and transfers these to Earth.  There is an access panel leading to the corridor to the south." );


  set_objects( 
 DIR+"/monsters/james.c", 
 DIR+"/monsters/eric.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x-20y-20z0.c"
  ]) );
}
