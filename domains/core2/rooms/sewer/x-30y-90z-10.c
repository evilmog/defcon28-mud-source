inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "You have reached the end of the service duct. The grey walls turn to large metal plates, while the lights are now big light panels which almost blind you. Here, hidden air ventilators blow a lot of air at you. You feel like you are standing in a wind tunnel. \n\nThe access shaft is located to your west, while the service duct continues east. " );


  set_objects( 
 DIR+"/monsters/rat.c", 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-20y-90z-10.c",
  "west" : DIR+"/rooms/sewer/x-40y-90z-10.c"
  ]) );
}
