inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 280);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "east" );
  set_short( "East Dome Corridor" );
  set_long( "The only feature of this corridor is a singular blue stripe which runs along both sides of the corridor. Big enough to comfortably accommodate three human adults walking abreast, you do not encounter any space problems walking along this corridor at the moment. \n\nOne of the East dome's clerical areas lie to your north. A droid outfitting bay is to your east, while the corridor continues to your southwest. " );

 set_exits( ([
  "north" : DIR+"/rooms/east/x280y-30z0.c",
  "east" : DIR+"/rooms/east/x290y-40z0.c",
  "southwest" : DIR+"/rooms/east/x270y-50z0.c"
  ]) );
}
