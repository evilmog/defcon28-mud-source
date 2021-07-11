inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -80);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "A few solar panels have shorted out in this part of the atrium. The result is a lot of dark shadows thrown by the large fern-like plants. Suddenly, you don't feel very secure in here, what with the dark earth crunching beneath your feet, the thick leaves and the cool atmosphere. \n\nSmall paths take you to the north and west." );


  set_objects( 
 DIR+"/monsters/tangleweed.c", 
 DIR+"/monsters/tangleweed.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x40y-70z-20.c",
  "west" : DIR+"/rooms/sewer/x30y-80z-20.c"
  ]) );
}
