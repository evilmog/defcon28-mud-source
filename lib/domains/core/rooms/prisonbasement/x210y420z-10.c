inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 210);
  set_property("y", 420);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Prison Turbolift: Basement Level" );
  set_long( "This mass-transit station is in the middle of the Prison's basement, two floors down from the first floor. It is a large circular room with many light plates on the ceiling illuminating it. Somewhere nearby you can hear the soft hum of power generators.\n\nA corridor leads to the northwest. There is a turbolift in a far corner of the room which you may use to go up." );

 set_exits( ([
  "northwest" : DIR+"/rooms/prisonbasement/x200y430z-10.c",
  "up" : DIR+"/rooms/prison/x170y210z0.c"
  ]) );
}
