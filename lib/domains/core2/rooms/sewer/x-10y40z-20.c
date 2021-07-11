inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 40);
  set_property("z", -20);

  door_closed = 1;
  locked = 1;
  key = "secard";
  add_area( "sewer" );
  add_block("south");  set_short( "Maintenance Corridor" );
  set_long( "Steam from the large pipes surrounding you in this hot maintenance corridor fills your vision. Occasionally, hot white moisture burst forth from the joints of the large pipe, threatening to scald you. You notice that the amount of steam lessens to your south.\n\nThe corridor continues to your west. The steam control room lies to your south, blocked by an iron door." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-10y30z-20.c",
  "west" : DIR+"/rooms/sewer/x-20y40z-20.c"
  ]) );
}
