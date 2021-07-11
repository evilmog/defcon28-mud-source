inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Incinerator Controls" );
  set_long( "This is a room heavily shielded from all the heat the incinerator is generating outside. You find yourself in a cool and dark room with a small panel looking out into the incinerator deck. Various monitors display information about the incinerator's current status, while a few consoles allow manipulation of the incinerator.\n\nThe exit is located to your south." );


  set_objects( 
 DIR+"/monsters/maxim.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-50y-60z-10.c"
  ]) );
}
