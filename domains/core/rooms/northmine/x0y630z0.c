inherit "/std/room";
inherit "/std/evil/mine";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 630);
  set_property("z", 0);

  add_area( "northmine" );
  set_short( "North Mine - Ruins" );
  set_long( "This was the center of the very busy north mine. Years ago there was an accident that caused a cave-in. The floors are covered in dust and junk and the walls are covered in dirt.\n\nThe mass-transit system continues north for some strange reason while south will take you back to CITY.\n\nIt looks like some sort of shifty %^MAGENTA%^crypto%^CYAN%^ currency mines have been cobbled together. Perhaps you should find a terminal." );
  add_item("terminal", "This is a crypto currency terminal. Type: %^MAGENTA%^crypto%^RESET%^ to get started");
  add_action("do_mine", "crypto");

 set_exits( ([
  "north" : DIR+"/rooms/northmine/x0y670z0.c",
  "south" : DIR+"/rooms/northmine/x0y590z0.c"
  ]) );
}

