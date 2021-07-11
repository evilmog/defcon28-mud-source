inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Dry Pipe" );
  set_long( "You move along this large pipe with ease. The steel inner surfaces are made of stainless steel and although it has already been a long time, you can still see a rough reflection of yourself in it. Surprisingly, you can hardly smell the sewage from here. \n\nYou may go either north or south along this pipe." );


  set_objects( 
 DIR+"/monsters/slug.c", 
 DIR+"/monsters/slug.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x80y40z-10.c",
  "south" : DIR+"/rooms/sewer/x80y20z-10.c"
  ]) );
}
