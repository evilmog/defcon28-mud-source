inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", -40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Southeast Primary Hub" );
  set_long( "Main access tunnels connect here from all cardinal points of the compass. A red button is on the wall. The ceiling is very high, a domed shape curving upwards with intermittent rectangular light panels. The floor is made out of a wire mesh, and you can see the dark sewer waters flow sluggishly beneath you. Although you are no longer wading through the sluggish mire, the stench here is as bad as ever. \n\nMain access tunnels extend to the north, south, east and west. \n\nIf arnie is missing there is a '%^RED%^button%^RESET%^' that you can push to have him respawn, evilmog is low tech, and he really doesn't care." );

    add_item("red button",
      "A giant red BUTTON!\nIt is glowing and says PRESS ME!");
     add_item("button", "A giant red BUTTON!\nIt is glowing and says PRESS ME!");
   add_action("do_push", "push");
   add_action("do_push", "press");

  set_objects( 
 DIR+"/monsters/arnie.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x50y-30z-10.c",
  "south" : DIR+"/rooms/sewer/x50y-50z-10.c",
  "east" : DIR+"/rooms/sewer/x60y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x40y-40z-10.c"
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
