inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 380);
  set_property("y", -670);
  set_property("z", 0);

  add_area( "nympho" );
  set_short( "Jewelry Shoppe Ruins" );
  set_long( "Broken glass countertops sit on top of smashed shelving units. Oddly enough the jewlery is still in here but its all covered in blood and guts." );

 set_exits( ([
  "north" : DIR+"/rooms/nympho/x380y-660z0.c",
  "east" : DIR+"/rooms/nympho/x390y-670z0.c"
  ]) );
}
