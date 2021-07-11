inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 200);
  set_property("y", 440);
  set_property("z", -10);

  add_area( "prisonbasement" );
  set_short( "Tube Passageway" );
  set_long( "This passageway is circular in shape. Here, the cool and professional image which is constantly reflected by other areas in the Company's domes gives way to an orderly mess of wires and tubes which line the walls and ceilings of this passageway.\n\nThe passageway continues to the north while to the south is the reception area." );

 set_exits( ([
  "north" : DIR+"/rooms/prisonbasement/x200y450z-10.c",
  "south" : DIR+"/rooms/prisonbasement/x200y430z-10.c"
  ]) );
}
