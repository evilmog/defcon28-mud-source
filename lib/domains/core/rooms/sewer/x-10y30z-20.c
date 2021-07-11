inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 30);
  set_property("z", -20);

  add_area( "sewer" );
  set_short( "Steam Control Room" );
  set_long( "This is a gigantic room, with a mad array of steam pipes arranged all over the room in a kind of random fashion. Large red-hot boilers are located at the perimeter of the room, the source of all the steam along the corridors. Whole rows of large wheels connected to the steam boilers are arranged conveniently on a large platform. A small screen is suspended above the wheels." );
   add_action("do_push", "turn");

  add_item("screen", "The screen appears to be a modified compass panel. It is covered with blinking red dots.");
  add_item("wheels", "These appear to be controlling the flow of the steam through the large pipes all around. Turning one of them will decrease the outflow of steam through the boilers.");
  add_item("wheel", "These appear to be controlling the flow of the steam through the large pipes all around. Turning one of them will decrease the outflow of steam through the boilers.");
  
 set_exits( ([
  "north" : DIR+"/rooms/sewer/x-10y40z-20.c"
  ]) );
}

void do_lock(void) {
  CHANNEL_D->chan_send_string("announce", "", "Steam generators back online, all systems nominal.", 1);
  LOCK_D->set_lock("/domains/core/rooms/sewer/x50y60z-10.c", 1);
  return;
}

void do_unlock(void) {
  this_player()->message("%^EXT_214%^You turn the wheel and the outflow of steam to the steam generators decreases, repair teams are en-route... you have 5 minutes before steam pressure rebuilds.%^RESET%^");
  LOCK_D->set_lock("/domains/core/rooms/sewer/x50y60z-10.c", 0);
  return;
}

int do_push(string arg) {
   if (arg == "wheel" || arg == "wheels") {
    do_unlock();
    call_out("do_lock", 300, " ");
    return 1;
   } else {
    this_player()->message("Turn what???");
    return 1;
   }
  return 0;
}
