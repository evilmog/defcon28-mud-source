inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 220);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "Every step you take clangs loudly on the steel floor beneath you. This steel corridor is not confining, but the stifling heat brought upon by a spoilt air-conditioner system and the metal walls makes it a little unbearable.\n\nThis corridor extends to your east and west." );


  set_objects( 
 DIR+"/monsters/repairdroid.c", 
 DIR+"/monsters/repairdroid.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/north/x60y220z0.c",
  "west" : DIR+"/rooms/north/x40y220z0.c"
  ]) );
}
