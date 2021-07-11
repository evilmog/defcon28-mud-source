inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 280);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Head Clerk's Office" );
  set_long( "A rather simple affair of an office, this room is where the head clerk of the East dome can be found. A gentle waft of air escapes from one of the ventilation shafts which is hidden from your view, cooling your body. A large steel table is located at the southern end of this room, and behind it is a pretty large chair layered with a fine cushion. A picture hangs on the eastern wall, not too big but noticeable enough for anyone who enters the room.\n\nYou may leave by going north." );

  add_item("picture", "A picture of a smiling woman in graduation clothes holding some sort of diploma. This should be a picture of the head clerk taken on her graduation day.");
  add_item("table", "This is the head clerk's table, the place where she usually works. It is sparse save for some odds-and-ends and a family photograph. ");
  add_item("chair", "You raise your eyebrows as you examine the chair. It seems to be of a rather high quality, for the cushion appears to be made of fine velvet. This chair must have been liberated from one of the higher offices of the Company. ");

  set_objects( 
 DIR+"/monsters/lyndia.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x280y-10z0.c"
  ]) );
}
