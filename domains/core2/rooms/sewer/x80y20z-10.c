inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", 20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "A Large Dry Pipe" );
  set_long( "Part of the City sewers buffer irrigation system, the large pipe has obviously never been used before, judging from the clean inner surfaces and the very dry condition it is in. You realize that this pipe alone can hold a lot of water, judging from its enormous size. \n\nThe pipe exits to the west into a service duct. Otherwise you can continues north along it." );

 set_exits( ([
  "north" : DIR+"/rooms/sewer/x80y30z-10.c",
  "west" : DIR+"/rooms/sewer/x70y20z-10.c"
  ]) );
}
