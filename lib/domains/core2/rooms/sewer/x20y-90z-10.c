inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", -90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "You don't feel safe knee-deep in the sewage of this passage. The low ceiling and cramped passageway seems to be a warning of some kind, and the ever-present stench and dark murky waters combine to make a claustrophobic setting. \n\nThe waterway canal extends to the east. An access shaft is located to your west." );


  set_objects( 
 DIR+"/monsters/watersnake.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x30y-90z-10.c",
  "west" : DIR+"/rooms/sewer/x10y-90z-10.c"
  ]) );
}
