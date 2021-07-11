inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -90);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "You find yourself surrounded by large fern-like plants. The ground is composed primarily of dark earth, so you deduce that the path you're on is part of the atrium itself. It is very bright in here, with the artificial ultra-violet solar panels installed on the ceiling to provide sunlight for the plants here.\n\nThe atrium continues to your northeast. An access shaft is located to your west." );


  set_objects( 
 DIR+"/monsters/tangleweed.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/sewer/x10y-90z-20.c",
  "northeast" : DIR+"/rooms/sewer/x30y-80z-20.c"
  ]) );
}
