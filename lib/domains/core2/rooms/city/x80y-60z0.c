inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Weapon Shop" );
  set_long( "This room appears to be filled with swords. No idea why this futuristic environment uses swords but lets go with it. An autobot is in the room to sell you stuff.\n\nType '%^MAGENTA%^list%^RESET%^' to get a list of services. You can also type '%^MAGENTA%^buy %^GREEN%^item%^RESET%^' where item is the item name of the item you wish to purchase." );


  set_objects( 
 DIR+"/monsters/wbot_1_20.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/city/x70y-60z0.c"
  ]) );
}
