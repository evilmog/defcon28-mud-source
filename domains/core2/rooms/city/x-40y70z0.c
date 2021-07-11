inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Outer Generator T-junction" );
  set_long( "This T-junction is brightly-lit. A slow, vibrating hum resonates throughout the entire place, a result of the reactions going on within the fusion reactor. This T-junction is just one of four which links together all the outer generator corridors.\n\nTo your south is a raised hallway which will take you over the generator. The outer generator corridor extends to the east and west." );

 set_exits( ([
  "south" : DIR+"/rooms/city/x-40y60z0.c",
  "east" : DIR+"/rooms/city/x-30y70z0.c",
  "west" : DIR+"/rooms/city/x-50y70z0.c"
  ]) );
}
