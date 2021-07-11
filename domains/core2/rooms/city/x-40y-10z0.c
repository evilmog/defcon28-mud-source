inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Accounts Payable" );
  set_long( "Accounts payable handles the payments to the many vendors that the Company utilizes for equipment and supplies here on Core. This was originally handled on Earth, but it soon became apparent that it was easy to misreport what was received and a few, now unemployed, Vice Presidents were getting kickbacks from vendors who cashed in on this practice. The accounts payable department now has a staff of inspectors that assure the quantities reported on packing lists are actually the quantities received. There is an access panel to the south that leads to the corridor. " );


  set_objects( 
 DIR+"/monsters/kavi.c", 
 DIR+"/monsters/horace.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/city/x-40y-20z0.c"
  ]) );
}
