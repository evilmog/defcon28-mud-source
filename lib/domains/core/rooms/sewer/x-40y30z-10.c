inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", 30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "You are in an old service duct, passageways built to facilitate the movement of Company personnel in the City sewers. The lack of light and dirty walls add up to make this an unpleasant place, while the strong stench of the sewers make this little better than the main access tunnels. \n\nThe service duct continues to your west. A sluice is located to your east." );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-30y30z-10.c",
  "west" : DIR+"/rooms/sewer/x-50y30z-10.c"
  ]) );
}
