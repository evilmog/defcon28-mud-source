inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 190);
  set_property("y", 220);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "CITY Detention Center - Hallway" );
  set_long( "You are in a hallway within the CITY Detention Center.  This hallway runs through the center of the dome, with the detention cells lying just a ways to the east.  A dark and forboding room is due north of your current position.  A warning label is posted on the north door. West leads towards a loud room, while east takes you back towards the central hub. " );

  add_item("label", "The label reads %^CYAN%^BOLD%^INTERROGATION ROOM - NO UNAUTHORIZED PERSONNEL%^RESET%^");
 set_exits( ([
  "north" : DIR+"/rooms/prison/x190y230z0.c",
  "east" : DIR+"/rooms/prison/x200y220z0.c",
  "west" : DIR+"/rooms/prison/x180y220z0.c"
  ]) );
}
