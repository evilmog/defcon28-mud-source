inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 60);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Steam Room" );
  set_long( "This is a large room, the floors and walls can not be seen due to the large amount of steam. The room is faintly lit with red lighting and you swear you can hear a creature in the background.\n\nYou can return to generator control by going up the ladder. There is a red button on the wall." );
   add_item("red button",
      "A giant red BUTTON!\nIt is glowing and says PRESS ME!");
     add_item("button", "A giant red BUTTON!\nIt is glowing and says PRESS ME!");
   add_action("do_push", "push");
   add_action("do_push", "press");

  set_objects( 
 DIR+"/monsters/sewerboss.c"
);
 set_exits( ([
  "up" : DIR+"/rooms/sewer/x50y60z-10.c"
  ]) );
}


int do_push(string arg) {
   if (arg == "button" || arg == "me") {
      this_environment()->setup();
      this_player()->do_look(this_environment());
      return 1;
   } else {
      return 0;
   }
}
