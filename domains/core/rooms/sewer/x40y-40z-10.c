inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Wading waist-deep in such a gigantic tunnel fills you with a certain feeling of dread, especially since you can't see beyond the surface of the water you are wading in. The stench of sewage here is strong, with the source of the smell coming from your east. The tunnel is very dimly illuminated by small lights by the side of the tunnel. \n\nThe main access tunnel continues to your west. The southeast primary hub is located to the east, while a service duct runs to the north. " );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x40y-30z-10.c",
  "east" : DIR+"/rooms/sewer/x50y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x30y-40z-10.c"
  ]) );
}
