inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "Cold sewer waters slosh around your knees as you use the narrow walls to guide yourself in the darkness of the waterway canal. You notice thin strips of grime and dirt hanging down from the ceiling, brushing against your face and leaving behind slimy trails of sediment. \n\nYou can continue in the waterway canal system by going north or east." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-50y20z-10.c",
  "east" : DIR+"/rooms/sewer/x-40y10z-10.c"
  ]) );
}
