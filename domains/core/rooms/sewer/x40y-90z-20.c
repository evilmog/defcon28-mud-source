inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -90);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Underground Atrium" );
  set_long( "As you brush aside the large plants along the path, you see that the walls of the atrium have many vents in them. As you look, you notice that air is not being blown out of the vents, but is actually being sucked inside. A red button is on the floor. This atrium was constructed to provide oxygen for the dwellers of the City dome.\n\nThe atrium extends to your northwest." );

     add_item("red button",
      "A giant red BUTTON!\nIt is glowing and says PRESS ME!");
     add_item("button", "A giant red BUTTON!\nIt is glowing and says PRESS ME!");
   add_action("do_push", "push");
   add_action("do_push", "press");


  set_objects( 
 DIR+"/monsters/snapperjaw.c", 
 DIR+"/monsters/snapperjaw.c", 
 DIR+"/monsters/pottles.c"
);
 set_exits( ([
  "northwest" : DIR+"/rooms/sewer/x30y-80z-20.c"
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
