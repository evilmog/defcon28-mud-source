inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 290);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Formatting Department" );
  set_long( "Various personal computers are stacked neatly on tables here. The room is dimly lit, and most of the illumination is provided by the glow of the computer screens. This is the formatting department, the place where documents are properly formatted before being officially sent off to wherever they're due for.\n\nYou may leave south to the clerical authorization area, or west towards a clerical area. " );


  set_objects( 
 DIR+"/monsters/eastclerk.c", 
 DIR+"/monsters/eastformatter.c", 
 DIR+"/monsters/eastformatter.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/east/x290y-20z0.c",
  "west" : DIR+"/rooms/east/x280y-10z0.c"
  ]) );
}
