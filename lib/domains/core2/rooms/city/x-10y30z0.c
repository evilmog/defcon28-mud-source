inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 30);
  set_property("z", 0);

  door_closed = 1;
  locked = 1;
  key = "corekey";
  add_area( "city" );
  add_block("south");  set_short( "Outer Generator Corridor" );
  set_long( "This corridor loops around the generator which contains the nuclear fusion reactor. The walls are made out of a mixture of granite and alloy, presumably designed to withstand the powerful reactions within the reactor. A viewport situated at the inner wall looks down at the generator.\n\nTo your north is a T-junction. The outer generator corridor continues southwest. To your south is a storeroom." );


  set_objects( 
 DIR+"/monsters/grunt.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x-10y40z0.c",
  "south" : DIR+"/rooms/city/x-10y20z0.c",
  "southwest" : DIR+"/rooms/city/x-20y20z0.c"
  ]) );
}
