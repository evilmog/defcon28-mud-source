inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 10);
  set_property("y", -70);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Office of Employee Morale" );
  set_long( "A happy employee is a productive employee!  The Company plans parties, contests, and awards via this department.  The money spent on such extravagances are easily covered by increased production and improved quality and yields." );


  set_objects( 
 DIR+"/monsters/antoinnete.c"
);
 set_exits( ([
  "east" : DIR+"/rooms/city/x20y-70z0.c"
  ]) );
}
