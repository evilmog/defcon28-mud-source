inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 30);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Lake" );
  set_long( "Still cold waters of this underground lake engulf your body till the chest. It is not too dark in here, with lighting provided by some unseen source of illumination high up in the cavernous ceiling. All is still here. \n\nThe access shaft is located to your northwest, the middle of the lake. Otherwise you may proceed to your north, west or southeast deeper into the lake." );


  set_objects( 
 DIR+"/monsters/blob.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x40y40z-20.c",
  "west" : DIR+"/rooms/sewer/x30y30z-20.c",
  "northwest" : DIR+"/rooms/sewer/x30y40z-20.c",
  "southeast" : DIR+"/rooms/sewer/x50y20z-20.c"
  ]) );
}
