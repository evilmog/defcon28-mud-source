inherit "/std/room";
inherit "/std/evil/keytracker";

#include "../../domain.h"
void setup( void ) {

  #include "area.h"

  set_property("x", 230);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Maintenance Closet" );
  set_long( "This is yet another unused closet, the floor likes like a server rack was in here at one point. You can see the outline in the dust from where it was. Now this room looks completely empty. A button is on the wall." );
  add_item("button", "This is a red button, you should probably 'push button'");
   add_action("do_push", "push");
   add_action("do_push", "press");

 set_exits( ([
  "east" : DIR+"/rooms/east/x240y-10z0.c"
  ]) );
}

int do_push(string arg) {
  int result;
  result = do_keytrack(2);
  return result;
}
