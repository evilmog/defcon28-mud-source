inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -60);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Vegetation Lab" );
  set_long( "Apparently the original source of the plants found throughout Shay Park, this room once was a Vegetation Engineering Lab. Now it is a filthy wreck. Not one piece of scientific equipment in this room looks usable or even salvageable anymore. All of is has either been kicked off tables and smashed on the floor, or is covered in rodent feces." );


  set_objects( 
 DIR+"/monsters/atriumrat.c", 
 DIR+"/monsters/atriumrat.c", 
 DIR+"/monsters/atriumrat.c", 
 DIR+"/monsters/atriumrat.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x60y-60z0.c",
  "west" : DIR+"/rooms/city/x40y-60z0.c"
  ]) );
}
