inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -50);
  set_property("y", -80);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Airlock Interior" );
  set_long("There is nothing, this is the end....");
  
  

 
}
