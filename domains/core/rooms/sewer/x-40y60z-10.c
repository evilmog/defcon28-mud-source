inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "A whole host of weird, new and otherwise nauseating smells greet you as you slowly make your way through this sludge. The big tunnel does little to suppress the smell, although you know that the tall ceiling actually helps to dissipate the smells. Still, breathing such foul air in near darkness isn't exactly your idea of a swell time. \n\nExits to the other parts of the main access tunnel are to the east and west. " );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-30y60z-10.c",
  "west" : DIR+"/rooms/sewer/x-50y60z-10.c"
  ]) );
}
