inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Company Apothecary" );
  set_long( "Somehow the company managed to teach an autobot to make potions. An entire rack of concoctions is on racks against the wall while a robotic arm grabs potions similar to a tape library robot.\n\nType '%^MAGENTA%^list%^CYAN%^' to get a list of services." );


  set_objects( 
 DIR+"/monsters/bartender.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x40y-70z0.c"
  ]) );
}
