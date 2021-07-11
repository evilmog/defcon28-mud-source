inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 70);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Abandoned Quarters" );
  set_long( "The goatish fetid stench is rather prominent here. You see old rags all bundled into a corner, as if made into some sort of bed or something. Whatever once occupied this area of the sewers must have once slept here. Judging from the size of the makeshift bed, it must have been pretty big. \n\nIt seems to stink rather badly to your northeast. An old passage lies to your east." );


  set_objects( 
 DIR+"/monsters/johnson.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-30y70z-10.c",
  "northeast" : DIR+"/rooms/sewer/x-30y80z-10.c"
  ]) );
}
