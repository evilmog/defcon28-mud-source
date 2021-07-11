inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 170);
  set_property("y", 210);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "CITY Detention Center - Entrance" );
  set_long( "You have entered the CITY Detention Center for dangerous individuals. The surgical steel of this corridor is kept spotless by around-the- clock surveillance and cleaning droids, while a large green stripe runs down the center of the corridor, heading towards the main bulk of the quad.  Two large Vaurgch guards stand at their posts here to prevent any unauthorized entry into the facility.  There's an old turbo-lift leading down into the bowels of the CITY dome in this room as well. " );

 set_exits( ([
  "east" : DIR+"/rooms/prison/x180y210z0.c",
  "west" : DIR+"/rooms/north/x100y210z0.c",
  "southeast" : DIR+"/rooms/prison/x180y200z0.c",
  "down" : DIR+"/rooms/prisonbasement/x210y420z-10.c"
  ]) );
}
