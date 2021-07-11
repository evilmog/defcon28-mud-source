inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Sketchy Clinic" );
  set_long( "This appears to be some sort of sketchy clinic. The tiles haven't been cleaned in ages and the floor is covered in blood.\n\nA %^MAGENTA%^list%^RESET%^ of services is on the wall." );

 set_exits( ([
  "west" : DIR+"/rooms/city/x-20y-40z0.c"
  ]) );
}
