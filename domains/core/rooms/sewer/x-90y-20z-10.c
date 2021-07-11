inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -90);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Converter Master Control" );
  set_long( "This wide circular room is the converter master control room. The bright white lights on the ceiling are throbbing slowly, as if in rhythm with a heartbeat. The middle of the room is sunk down with steps leading up to the upper part of it. White plastic housings which are dispersed throughout the room on both upper and lower levels contain the controls, while a few monitors looking down from the ceiling display the general condition of the two converters here. A soft hum seems to be coming from your north. \n\nTo the north is a geothermal converter. A corridor is to your south." );


  set_objects( 
 DIR+"/monsters/drone.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-90y-10z-10.c",
  "south" : DIR+"/rooms/sewer/x-90y-30z-10.c"
  ]) );
}
