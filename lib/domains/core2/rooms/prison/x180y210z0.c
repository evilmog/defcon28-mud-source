inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 180);
  set_property("y", 210);
  set_property("z", 0);

  add_area( "prison" );
  set_short( "Detention Center - West Transit" );
  set_long( "This is the transit center entering the Detention Center.  Cold steel greets you at every turn as the guards pat you down for concealed weapons or contraband before allowing you to continue onwards from this point.  The panel west of here leads back towards the CITY proper Two large Vaurgch guards stand at their posts here to prevent any unauthorized entry into the facility.  A small poster has been placed on the wall. " );

 set_exits( ([
  "east" : DIR+"/rooms/prison/x210y210z0.c",
  "west" : DIR+"/rooms/prison/x170y210z0.c"
  ]) );
}
