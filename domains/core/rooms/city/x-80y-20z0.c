inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Human Resources - Corridor" );
  set_long( "Welcome to The Company's Human Resources Department. This department offers many services to the Company worker. If you are interested in receiving training, advancement, or to learn about additional opportunities within The Company, proceed to the south.\n\nThe office of the Director of Human (and other species/races) Resources is to the north. To the east is an access panel that leads to the main southwest corridor. " );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-80y-10z0.c",
  "south" : DIR+"/rooms/city/x-80y-30z0.c",
  "east" : DIR+"/rooms/city/x-70y-20z0.c"
  ]) );
}
