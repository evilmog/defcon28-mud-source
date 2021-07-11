inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Shay Park" );
  set_long( "A small grove of dwarf fruit trees begins here and continues to the north. This park was designed to simulate many different sorts of Earth ecologies, somewhat like a biosphere research facility.\n\nThis corner of the park is a bit less lush and a lot dryer than the northern section. Plants become smaller and less healthy looking to the west, turning to desert in the distance." );


  set_objects( 
 DIR+"/monsters/fireant.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x50y-40z0.c",
  "west" : DIR+"/rooms/city/x40y-50z0.c"
  ]) );
}
