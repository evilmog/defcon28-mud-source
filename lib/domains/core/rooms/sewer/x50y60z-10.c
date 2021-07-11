inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 60);
  set_property("z", -10);

  door_closed = 1;
  locked = 1;
  key = "steamkey";
  add_area( "sewer" );
  add_block("down");  set_short( "Hydro Generator #5" );
  set_long( "You are in the middle of a large chamber, one of the six which houses the City sewers hydro generators. All around you are large gigantic cylinders, transparent tubes which have water flowing swiftly through them. The artificially-contained waterfalls are spinning a waterwheel, a device which in turn generates gerks for the City's emergency gerk supply. Small generators are linked to the waterwheels just for this purpose. An abnormal amount of steam appears to be rising from the floor.\n\nYou may exit this room by leaving west." );

  add_item("floor", "Steam erupts from the vents in between the floor panelings. There seems to be a kind of steam room below. One such panel on the floor seems to be quite loose.");
  add_item("panel", "This is a loose panel, try going 'down'");
 set_exits( ([
  "west" : DIR+"/rooms/sewer/x40y60z-10.c"
  ]) );
 set_hidden_exits( ([
  "down" : DIR+"/rooms/sewer/x50y60z-20.c"
  ]) );
}
