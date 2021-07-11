inherit "/std/room";

#include "../../domain.h"
void setup( void ) {

  #include "area.h"

  set_property("x", 230);
  set_property("y", -10);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Maintenance Closet" );
  set_long( "This is yet another unused closet, the floor likes like a server rack was in here at one point. You can see the outline in the dust from where it was. Now this room looks completely empty. A button is on the wall." );

   add_action("do_push", "push");
   add_action("do_push", "press");

 set_exits( ([
  "east" : DIR+"/rooms/east/x240y-10z0.c"
  ]) );
}

int do_push(string arg) {
  int * key_tracker; /* tracks 8 keys from quest */
  object player; /* tracks player*/
  player = this_player();
  key_tracker = player->get_key_tracker();
   if (arg == "button") {
      write("You push the button and your key tracker is updated\n");
      if (!key_tracker) {
        key_tracker = (( { 0, 0, 0, 0, 0, 0, 0, 0 } ));
      }
        key_tracker[2] = 1;
        player->set_key_tracker(( { key_tracker[0], key_tracker[1], key_tracker[2], key_tracker[3], key_tracker[4], key_tracker[5], key_tracker[6], key_tracker[7] } ));
      return 1;
   } else {
      return 0;
   }
}
