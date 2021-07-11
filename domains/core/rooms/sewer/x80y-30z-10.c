inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", -30);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Pipe" );
  set_long( "Sewer water seems to be flowing through the large and dark pipe. The moss-covered surface helps you move along this pipe, although the slimy touch of the moss disgusts you. \n\nThe pipe exits to the south into a main access tunnel. The large pipe continues to the west. " );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x80y-40z-10.c",
  "west" : DIR+"/rooms/sewer/x70y-30z-10.c"
  ]) );
}
