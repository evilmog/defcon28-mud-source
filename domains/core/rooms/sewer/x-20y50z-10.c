inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "Dark and slimy, this service duct is the dry equivalent of the main access tunnels which connect the sewers together. You have to actually brush away strips of dirt hanging from the ceiling to prevent them from getting into your own face. \n\nThe service duct stretches to your east and west." );


  set_objects( 
 DIR+"/monsters/cockroach.c", 
 DIR+"/monsters/cockroach.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-10y50z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y50z-10.c"
  ]) );
}
