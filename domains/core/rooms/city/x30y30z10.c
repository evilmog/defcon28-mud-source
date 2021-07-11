inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 30);
  set_property("z", 10);

  add_area( "city" );
  set_short( "Credit Cafe" );
  set_long( "Welcome to the Credit Cafe.  Hungry traders are ordering food and eating it at the many tables around the room.  A touch screen built in to each table allows for easy trading while eating.  A curved glass window spans from the northwest corner to the southeast corner of the room allowing traders to view the chaos below before returning to it when they're finished with their meals.\n\nThe counters on the west and south walls sell food and drink for the hungry trader." );


  set_objects( 
 DIR+"/monsters/jackback.c"
);
 set_exits( ([
  "southwest" : DIR+"/rooms/city/x20y20z10.c"
  ]) );
}
