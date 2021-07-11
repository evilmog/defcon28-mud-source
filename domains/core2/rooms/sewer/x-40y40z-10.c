inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Retro Pump Room" );
  set_long( "You stand in a large bright room. The waterway has disappeared into a proper walkway which you are now walking on. Twenty large pumps are all arranged around the room. Low wheezing noises seem to be coming from them, as if they are pumping something upwards. \n\nThe exit is located to your east." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-30y40z-10.c"
  ]) );
}
