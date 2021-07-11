inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 260);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Closet" );
  set_short( "Maintenance Closet" );
  set_long( "This is a dusty maintenance closet, the floors are all covered in dust and the walls are absolutely covered in years of gunk and dust. The only useful thing in this room is the giant switch on the wall and the warning sign." );
  add_action("flip", "flip");
  add_item("switch", "This is a giant switch, perhaps you should %^MAGENTA%^flip%^RESET%^ it.");
  add_item("sign", "This is a giant sign, it says WARNING, its not really a helpful sign......");
 set_exits( ([
  "east" : DIR+"/rooms/east/x270y-40z0.c"
  ]) );
}

int flip(string args) {
  int result;
  result = DARK_D->flip_east(1);
  return 1;
}
