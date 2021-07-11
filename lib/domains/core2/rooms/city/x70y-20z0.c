inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 70);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Executive Offices of Vice President Grey" );
  set_long( "This is where Greys secretary busily plans his day, so as to be sure he continues to keep The Company as the number one mining conglomerate in the galaxy.  To the north is an anteroom where you can patiently wait for Grey to grant you an audience. The main quadrant corridor is to the west.  A conference room is to the east.  If it has been locked by the moderator you will not be able to enter.  Some meetings are public and you can observe the proceedings from this room." );


  set_objects( 
 DIR+"/monsters/tawny.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x70y-10z0.c",
  "west" : DIR+"/rooms/city/x60y-20z0.c"
  ]) );
}
