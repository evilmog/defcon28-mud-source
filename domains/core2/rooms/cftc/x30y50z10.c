inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 50);
  set_property("z", 10);

  add_area( "cftc" );
  set_short( "CFTC Administration: North Offices" );
  set_long( "Several desks in an array take up the majority of the room. Each desk has a lamp and a chair.  Many trade clerks are here, doing various work that facilitates trade in the Financial Trade Center. The assistant system administrator's desk is also here, secluded in shadow. In the eastern part of the room, a security camera sits above an automatic, sliding door." );

  add_item("camera", "The CyberNet SC2380 is the top of the line in security camera equipment from CyberNet.");

  set_objects( 
 DIR+"/monsters/bluepeah.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/cftc/x40y50z10.c",
  "west" : DIR+"/rooms/cftc/x20y50z10.c"
  ]) );
}
