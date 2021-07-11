inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 260);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Storeroom" );
  set_long( "This storeroom is specifically made to accommodate the cleaning and maintenance needs of the droids assigned to upkeep this dome. It is very cramped, with very little space for you to move around. There is nothing here which is of any interest to the ordinary passerby, as only maintenance and repair materials are stored here.\n\nThe exit is located to the west." );

 set_exits( ([
  "west" : DIR+"/rooms/north/x30y260z0.c"
  ]) );
}
