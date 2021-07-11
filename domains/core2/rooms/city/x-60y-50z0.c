inherit "/std/room";
inherit "/std/evil/advance";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -60);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Human Resources - Special Assignments" );
  set_long("The Special Assignments department has been taken over by AI. It doesn't like you, it doesn't like me, we are not special. We are the same rotting chunks of meat as everything else. You have exceeded your authorized break.....now get back to work meatbag.\n\nTo get a list of quests type '%^MAGENTA%^quests%^RESET%^'.");

  add_action("do_quests", "quests");


 set_exits( ([
  "north" : DIR+"/rooms/city/x-60y-40z0.c"
  ]) );
}
