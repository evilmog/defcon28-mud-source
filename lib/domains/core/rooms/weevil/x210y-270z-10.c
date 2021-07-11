inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 210);
  set_property("y", -270);
  set_property("z", -10);

  add_area( "weevil" );
  set_short( "Secret Passage" );
  set_long( "There is a hole in the ceiling you can enter to go back to the hidden atrium. It looks tough to climb though. An odd space on the wall looks slime free. There are rice crumbs and slime trails heading east. " );


  set_objects( 
 DIR+"/monsters/smallweevil.c", 
 DIR+"/monsters/weevil.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/weevil/x220y-270z-10.c"
  ]) );

 set_hidden_exits( ([
  "hole" : "/domains/core/rooms/kore/x210y-230z-10.c"
  ]) );

}
