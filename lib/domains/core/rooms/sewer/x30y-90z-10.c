inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "This cramped passageway is making you feel claustrophobic, and the sewage which is up to your knees is definitely not helping you out. A surreal feeling of panic is compelling you to leave this area. \n\nThe waterway canal continues three ways : to the north, east and west. " );


  set_objects( 
 DIR+"/monsters/watersnake.c", 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x30y-80z-10.c",
  "east" : DIR+"/rooms/sewer/x40y-90z-10.c",
  "west" : DIR+"/rooms/sewer/x20y-90z-10.c"
  ]) );
}
