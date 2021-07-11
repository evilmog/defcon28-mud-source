inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 300);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Closet" );
  set_long( "This looks like some sort of maintenance closet, cables are all over here and dust filles the air. There is a big red button on the wall." );
  add_item("button", "This is a red button, you should probably 'push button'");
  add_action("do_push", "push");
  add_action("do_push", "press");


  add_item("cables", "Junky looking cables, not the button you are looking for.");
 set_exits( ([
  "west" : DIR+"/rooms/east/x290y-40z0.c"
  ]) );
}

int do_push(string arg) {
   if (arg == "button") {
      object obj;
      if (this_player()->present("secard")) {
        write("You already have the secard");
      } else {
        if (this_player()->present("tracker")) {
          obj = clone_object("/domains/core/objects/secard.c");
          obj->setup();
          obj->move(this_player());
          write("A robot arm comes down from the ceiling and puts the secard in your pockets... creepy I know but it is what it is.");
          return 1;
        } else {
          write("You must have the tracker to get the secard, go back and find arnie in the sewers....");
          return 1;
        }
    }
  } else {
    return 0;
  }
}