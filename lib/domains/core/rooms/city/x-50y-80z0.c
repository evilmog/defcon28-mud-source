inherit "/std/room";
inherit "/std/evil/quest7";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -80);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Airlock Interior" );
  set_long( "Big enough to fit ten people standing at a time, this white sterile room is one of the safe accessways between the domes and the outer atmosphere of Core. You notice black vents on the ceiling and some computer panels near the airlock doors. Bright lights lining the ceiling and the walls of the room illuminate this clinically-clean airlock interior. You could probably '%^MAGENTA%^leave airlock%^CYAN%^' to get out of this dome, but that would be inadvisable without proper protection and authorization." );

  add_action("do_leave", "leave");

 set_exits( ([
  "north" : DIR+"/rooms/city/x-50y-70z0.c"
  ]) );
}

int do_leave(string arg) {
  do_airlock(arg);
  return 1;
}
