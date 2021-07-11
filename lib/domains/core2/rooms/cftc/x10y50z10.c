inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 50);
  set_property("z", 10);

  add_area( "cftc" );
  set_short( "Galactic Securities: Vice President Tweeter's Office" );
  set_long( "The room is not very well lit, leading you to believe that not too much is done here.  Indeed, the Vice President's desk is very spartan.  A tall executive, black leather chair is behind the desk.  Two large couches sit transverse to the desk, lining a path room the door to the desk blocked by the oval-shaped mohogany table.\n\nA door on the south wall leads back to the Galactic Securities lobby." );

  add_item("couches", "The couches face west and east, towards eachother.");
  add_item("desk", "The large desk is constructed of expensive looking mahogany. It has almost nothing on it.");

  set_objects( 
 DIR+"/monsters/tweeter.c"
);
 set_exits( ([
  "south" : DIR+"/rooms/cftc/x10y40z10.c"
  ]) );
}
