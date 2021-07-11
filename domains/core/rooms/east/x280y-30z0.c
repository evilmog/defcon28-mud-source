inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 280);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Clerical Area" );
  set_long( "You have stepped into one of the clerical areas of the East dome, a place where harried-looking clerks rush forward and backward to finish up their jobs. A sense of charged anxiety fills the air. These people are a very worried lot.\n\nTo your south is a corridor. The authority checking department is located to the northeast, and the in/out office is to your west. " );


  set_objects( 
 DIR+"/monsters/eastclerk.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/east/x280y-40z0.c",
  "west" : DIR+"/rooms/east/x270y-30z0.c",
  "northeast" : DIR+"/rooms/east/x290y-20z0.c"
  ]) );
}
