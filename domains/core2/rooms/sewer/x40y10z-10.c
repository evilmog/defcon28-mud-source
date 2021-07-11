inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "As you try to avoid knocking your head on the ceiling, you do a good job of keeping your footing, especially with the swift current at your knees. The smell of the sewers isn't so pronounced here, but it is kind of dark.\n\nThe waterway canal opens up to the northwest and west. A small path to the southwest leads to what looks like a lair from where you are." );


  set_objects( 
 DIR+"/monsters/snake.c"
);
 set_exits( ([
  "west" : DIR+"/rooms/sewer/x30y10z-10.c",
  "northwest" : DIR+"/rooms/sewer/x30y20z-10.c",
  "southwest" : DIR+"/rooms/sewer/x30y0z-10.c"
  ]) );
}
