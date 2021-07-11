inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -90);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Access Shaft" );
  set_long( "You are on the bottom level of an access shaft. The walls here are made of plain steel. It is rather cold in here, and you feel small drafts of air entering the room via the exits.\n\nIron rungs lead up to the top level of this shaft. Exits are to the north and east." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x10y-80z-20.c",
  "east" : DIR+"/rooms/sewer/x20y-90z-20.c",
  "up" : DIR+"/rooms/sewer/x10y-90z-10.c"
  ]) );
}
