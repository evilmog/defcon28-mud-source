inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Watering Hole" );
  set_long( "This stone-walled room has nothing inside save a huge water-filled pool in the middle of it. It must have been a man-made pool, judging from the fine circular craftmanship of it. The water is dark and murky, the kind of water you find in a waterway canal. You realize that whatever once occupied this lair must have used this pool as drinking water. \n\nThe lair extends to your south and west." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-10y70z-10.c",
  "west" : DIR+"/rooms/sewer/x-20y80z-10.c"
  ]) );
}
