inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "With sewage water trickling beneath you and moss-encrusted surfaces your only grip in this pipe, you wonder why you even bother using this dark and smelly pipe as an accessway. \n\nThe pipe extends to the north and south." );


  set_objects( 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-70y30z-10.c",
  "south" : DIR+"/rooms/sewer/x-70y10z-10.c"
  ]) );
}
