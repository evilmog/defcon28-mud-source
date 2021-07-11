inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Company Outfitters" );
  set_long( "This is yet another company armour shop, it has various items suitable for newer players. A robotic arm is ready to serve you.\n\nType '%^MAGENTA%^list%^RESET%^' to get a list of things to buy." );


  set_objects( 
 DIR+"/monsters/abot_3_4.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x70y-60z0.c"
  ]) );
}
