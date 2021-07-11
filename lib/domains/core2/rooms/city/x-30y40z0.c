inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", 40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Access Walkway" );
  set_long( "A cold draft of air from somewhere brushes against your face. The walls here slant downwards, while the fact that you are walking above a huge fusion generator keeps coming to mind due to the constant vibration.\n\nTo the west lies the generator monitoring center. East takes you down the walkway to the outer generator area." );


  set_objects( 
 DIR+"/monsters/analyst.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x-20y40z0.c",
  "west" : DIR+"/rooms/city/x-40y40z0.c"
  ]) );
}
