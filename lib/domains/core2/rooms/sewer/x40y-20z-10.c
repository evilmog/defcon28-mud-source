inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "Being knee-deep in the torpid sewer waters here isn't exactly very reassuring. The low ceiling which you bump your head on each time you straighten up and the narrow passageway threatens to give you a permanent case of claustrophobia. \nThe waterway canal extends to your north. To your east lies a main access tunnel." );


  set_objects( 
 DIR+"/monsters/watersnake.c", 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x40y-10z-10.c",
  "east" : DIR+"/rooms/sewer/x50y-20z-10.c"
  ]) );
}
