inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "You can hear the soft rumbling of rushing waters echoing off the huge tunnel walls, but with the complicated acoustics, you can't exactly place the source of those sounds. Still, you have other things to worry about, like the waist-high sewage, the near-dark situation of the tunnel and that abominable sewer stench. \n\nExits to the other parts of this main access tunnel are to the northwest and southeast. Iron rungs lead up to the City dome. " );


  set_objects( 
 DIR+"/monsters/snake.c"
);
 set_exits( ([
  "northwest" : DIR+"/rooms/sewer/x-80y-10z-10.c",
  "southeast" : DIR+"/rooms/sewer/x-60y-30z-10.c",
  "up" : DIR+"/rooms/city/x-70y-20z0.c"
  ]) );
}
