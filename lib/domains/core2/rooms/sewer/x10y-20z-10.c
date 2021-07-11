inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -20);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Engineers Workroom" );
  set_long( "A rather large room, the sewer engineers workroom consists of a few tables and chairs, some workshelves, schematic boards, some repair equipment and a few other miscellaneous stuff. This is the place where the sewer engineers work to assure the smooth running of the City sewers. You notice that the stuff scattered all around the room makes it rather untidy. \n\nThe engineers' sleeping quarters is located to the east. To the south is a service duct. " );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x10y-30z-10.c",
  "east" : DIR+"/rooms/sewer/x20y-20z-10.c"
  ]) );
}
