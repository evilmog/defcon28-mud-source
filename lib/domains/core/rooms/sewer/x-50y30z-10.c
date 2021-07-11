inherit "/std/room";
inherit "/std/evil/keytracker";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", 30);
  set_property("z", -10);

   add_action("do_push", "push");
   add_action("do_push", "press");

  add_area( "sewer" );
  set_short( "Service Duct" );
  set_long( "The darkness is getting to you, as your muffled footfalls splashing in the many puddles of water on the floor echo off the blank and dirty walls of the duct. The smell here is nauseating at best as you try your best not to lose the contents of your stomach. A button on side of the pipe catches your eye.\n\nYou may leave to your north and east." );

  add_item("button", "A purple button is here, it says 'PRESS ME'");

  set_objects( 
 DIR+"/monsters/rat.c", 
 DIR+"/monsters/rat.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-50y40z-10.c",
  "east" : DIR+"/rooms/sewer/x-40y30z-10.c"
  ]) );
}

int do_push(string arg) {
  int result;
  result = do_keytrack(0);
  return result;
}
