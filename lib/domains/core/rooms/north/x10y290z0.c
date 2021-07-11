inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 290);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Public Relations" );
  set_long( "This is the Public Relations office of the North Dome. It is very dimly-lit, and you notice a faint waft of aftershave in the air. There does not seem to be much you can see in here. In fact, you wonder how anyone can do any work in this light. However, in the near-darkness, you can make out a table and a chair in the room, no doubt the place where the Public Relations Representative sits when he is here.\n\nThe exit is to your south." );


  set_objects( 
 DIR+"/monsters/randy.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/north/x10y280z0.c"
  ]) );
}
