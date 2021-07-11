inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You stumble around in the dark, bruising your body occasionaly upon the narrow walls of this passageway. Your head is filled with small bumps from knocking it one time too many on the extremely low ceiling while your legs are getting soft from all the soaking in the cold sewage water. \n\nYou may continue to the south and west." );


  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-20y10z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y20z-10.c"
  ]) );
}
