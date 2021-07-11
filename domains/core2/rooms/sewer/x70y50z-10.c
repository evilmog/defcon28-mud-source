inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", 50);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "Tiny footprint marks, some new while others old, cover the floor of this service duct. The sewer creatures must be using this duct for their own access. Somehow, the unmistakable smell of the sewers seem to fill this duct a lot.\n\nYou can continue onwards this service duct by either going north or west. A large pipe juts out from the eastern wall." );


  set_objects( 
 DIR+"/monsters/rat.c", 
 DIR+"/monsters/rat.c", 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x70y60z-10.c",
  "west" : DIR+"/rooms/sewer/x60y50z-10.c"
  ]) );
}
