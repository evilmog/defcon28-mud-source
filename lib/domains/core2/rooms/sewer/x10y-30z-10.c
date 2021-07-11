inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "This is a service duct in the City sewers, a passageway which is both clear of sewage and the distinct stench of the sewers. You suspect this to be a place which has been unused for some time, judging from the thin layer of dust on the walls and floor. \n\nThe service duct continues to the east. The City sewers' engineers' workroom lies to the north. " );


  set_objects( 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x10y-20z-10.c",
  "east" : DIR+"/rooms/sewer/x20y-30z-10.c"
  ]) );
}
