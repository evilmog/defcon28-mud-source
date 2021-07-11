inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "The low ceiling and cramped quarters you are in is leaving you in a rather vulnerable position. To add to the danger is the fast- moving sewer waters at your knees, not to mention the darkness which tend to make you lose your orientation every now and then. " );


  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x30y-20z-10.c",
  "east" : DIR+"/rooms/sewer/x40y-10z-10.c",
  "west" : DIR+"/rooms/sewer/x20y-10z-10.c"
  ]) );
}
