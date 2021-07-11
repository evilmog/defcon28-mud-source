inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 230);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Security Office" );
  set_long( "This is a rather dimly-illuminated room. In the semi-darkness, you see a large console, behind which is a few chairs where those in charge of security can monitor the going-ons in the dome via secret cameras. This is a high-security room, and non-authorized personnel can only stay in one corner and not interfere with the situation here.\n\nThe exit is to your east." );

  add_item("console", "This is a security console which contains monitors used to monitor the going-ons of the dome. Do not even hope to operate it. It is way too complex.");

  set_objects( 
 DIR+"/monsters/securityofficer.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/north/x60y230z0.c"
  ]) );
}
