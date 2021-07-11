inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", 70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "This service duct looks pretty plain and dull. Except for the few puddles of water and the regular cockroach scuttling by, there is about nothing here. \n\nTo your east is a main access tunnel. The service duct continues to your south." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-70y60z-10.c",
  "east" : DIR+"/rooms/sewer/x-60y70z-10.c"
  ]) );
}
