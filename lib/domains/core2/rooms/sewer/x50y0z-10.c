inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 0);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "With garbage floating in the sewer waters at your waist level, it's a miracle that you are still able to carry onwards. The small lights by the sides of this large tunnel give little comfort to the unknown dangers which lurk in the depths of the sewers. You silently pray you don't meet anything too hostile. " );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x50y10z-10.c",
  "south" : DIR+"/rooms/sewer/x50y-10z-10.c"
  ]) );
}
