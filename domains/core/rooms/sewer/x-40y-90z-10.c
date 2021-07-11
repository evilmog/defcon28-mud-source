inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -40);
  set_property("y", -90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "A rather plain room with steel walls. The only importance of this room is to provide access for Company personnel between the different levels of the City sewers. \n\nYou see iron rungs leading down to lower levels of the sewers. A service duct is located to your east. " );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-30y-90z-10.c",
  "down" : DIR+"/rooms/sewer/x-40y-90z-20.c"
  ]) );
}
