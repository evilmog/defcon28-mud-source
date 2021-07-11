inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", -50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "A faint whiff of methane underlines the nauseating smell of the sewers. Here in this narrow waterway canal, your way is guided by the small ceiling lights. A flash of claustrophobia hits you every now and then as your ponder the smallness of this passage. " );


  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-10y-50z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y-50z-10.c"
  ]) );
}
