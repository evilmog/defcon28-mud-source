inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "Cold and dank, this service duct appears to be rather dry as opposed to the other parts of the City sewers. Plain stainless steel walls dimly illuminated by red emergency lights on the ceiling is all that is to this passageway. \n\nThe service duct continues to the southwest. To your north is a main access tunnel, while a waterway canal lies to your south." );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x80y-40z-10.c",
  "south" : DIR+"/rooms/sewer/x80y-60z-10.c",
  "southwest" : DIR+"/rooms/sewer/x70y-60z-10.c"
  ]) );
}
