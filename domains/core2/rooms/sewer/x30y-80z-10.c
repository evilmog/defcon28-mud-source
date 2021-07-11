inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", -80);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "This part of the canal is roughly larger than the others. Still, the sewage here is slightly above your knees, and the space you are in is still as cramped as ever. True to the sewers, the stench is making its presence suffocatingly known to you. \n\nA T-junction of sorts, waterway canals extend to your south, east and west. " );


  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x30y-90z-10.c",
  "east" : DIR+"/rooms/sewer/x40y-80z-10.c",
  "west" : DIR+"/rooms/sewer/x20y-80z-10.c"
  ]) );
}
