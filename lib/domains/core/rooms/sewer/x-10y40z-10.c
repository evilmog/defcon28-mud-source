inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", 40);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Sluice" );
  set_long( "This is yet another sluice, another huge iron grating which prevents huge material waste from going further into the purification process tunnels. Here, the sluice was built to prevent the buildup of unwanted solids and other side-effects from the chemical purification section from getting through. You decide that continuing on the pathway by the sides of the tunnel is much more advisable than going into the waterways, seeing that everything is all bubbly and frothy here.\n\nTo your south is the chemical purification tank. West takes you to the chemical stabilization area." );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-10y30z-10.c",
  "west" : DIR+"/rooms/sewer/x-20y40z-10.c"
  ]) );
}
