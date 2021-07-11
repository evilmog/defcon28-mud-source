inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 220);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "east" );
  set_short( "Maintenance Office" );
  set_long( "This is the East domes maintenance office. A strange smell of disinfectant is in the air, and you can see that this office is in the process of being cleaned. Soapwater lie in puddles all over the room, and a damp rag sits precariously on the edge of the only table in the room." );

  add_item("table", "The desk of the maintenance officer. Like everything else in the office, it is covered with spots of soapwater.");
  add_item("rag", "This filthy-looking rag has seen better days. At the moment, it is unused. The rag is just lying on the edge of a table, waiting to fall off on its own weight.");

  set_objects( 
 DIR+"/monsters/zaryem.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/east/x220y-30z0.c"
  ]) );
}
