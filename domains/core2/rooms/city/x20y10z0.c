inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 10);
  set_property("z", 0);

  add_area( "city" );
  set_short( "CITY Financial" );
  set_long( "This small office is very spartan.  The only major features in it are the cheaply painted white walls, poorly carpeted floor, small wooden table in the center of the room, and the two small chairs at the table." );

  add_item("table", "This is a small circular wooden table with metal legs.  On it appear to be various financial planning publications and reports.");
  add_item("chairs", "These are two small metal chairs, they look barely large enough to sit on.");

  set_objects( 
 DIR+"/monsters/planner.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x20y20z0.c"
  ]) );
}
