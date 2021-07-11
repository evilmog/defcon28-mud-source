inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Slug Lair" );
  set_long( "This is a small dark room, with illumination coming from the waterway canal to your northeast. The floor is totally covered with a thick slimy film, while you notice that some kind of green ooze is dripping down from the ceiling. This is a lair of sorts for the many slugs which you see all around this room. Most of the fat bloated creatures appear to be inanimate, but every now and then, you notice a slight movement here and there. The slugs on the floor, walls and ceiling everywhere look like they may just drop in on you anytime. The smell of methane here is overwhelming." );


  set_objects( 
 DIR+"/monsters/queenslug.c"
);
 set_exits( ([
  "northeast" : DIR+"/rooms/sewer/x-10y-50z-10.c"
  ]) );
}
