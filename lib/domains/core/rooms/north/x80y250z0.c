inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", 250);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Steel Corridor" );
  set_long( "The steel corridor you are in is made out of steel walls, steel floors and steel ceilings. Along with light panels which make this place unnecessarily bright and a non-functional air-conditioner system, this corridor is hot enough to give anyone a stroke.\n\nThe corridor continues to your west, while an office is located to your east. A store corridor can be reached by going northwest." );

 set_exits( ([
  "east" : DIR+"/rooms/north/x90y250z0.c",
  "west" : DIR+"/rooms/north/x70y250z0.c",
  "northwest" : DIR+"/rooms/north/x70y260z0.c"
  ]) );
}
