inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", -10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Snake Lair" );
  set_long( "Small rotting carcasses and bones stripped clean of their flesh are littered all over this huge chamber. You feel a chill wash over you as you look around and realize that the many shadows you see are not shadows but are in fact the dark skins of snakes. This place is just crawling with those legless creatures... \n\nThe lair seems to extend to your west. To your east is a waterway canal. " );


  set_objects( 
 DIR+"/monsters/greensnake.c", 
 DIR+"/monsters/snake.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-50y-10z-10.c",
  "west" : DIR+"/rooms/sewer/x-70y-10z-10.c"
  ]) );
}
