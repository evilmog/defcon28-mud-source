inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", 230);
  set_property("z", 0);

  add_area( "north" );
  set_short( "Housing Services" );
  set_long( "The Housing Services office of the North Dome is a rather modest affair. At a glance, it is merely four steel walls surrounding a mere steel table, a few chairs and two cabinets or so. You note that the administration does not care very much about this particular department.\n\nThe exit is to your north." );


  set_objects( 
 DIR+"/monsters/housingofficer.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/north/x10y240z0.c"
  ]) );
}
