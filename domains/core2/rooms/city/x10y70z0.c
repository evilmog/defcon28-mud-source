inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This is a small cramped office, the floor is covered in cheap orange carpet and the walls are a very dirty white.  Several rows of terminals line the walls.  There is no desk or furniture to speak of in the room and not even a lonely plant adorns the office." );

  add_item("terminals", "Several banks of terminals line the walls of this office, they all apepear to be displaying financial information on the various companies and commodities traded on the stockmarket.");

  set_objects( 
 DIR+"/monsters/brian.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x20y70z0.c"
  ]) );
}
