inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 280);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "Steel walls, a steel ceiling and a steel floor make up this corridor. In any other place, it would have been an acceptable practice, but the lack of air-conditioning in this dome and excessive bright light panels make this a very hot matter here.\n\nThe steel corridor continues to the north and west." );

 set_exits( ([
  "north" : DIR+"/rooms/north/x20y290z0.c",
  "west" : DIR+"/rooms/north/x10y280z0.c"
  ]) );
}
