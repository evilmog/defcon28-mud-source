inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 10);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Waterway Canal" );
  set_long( "The lack of light in the waterway canal hampers your quick progress, but the low ceiling and narrow walls help you find your way more accurately. Still, your very implements of direction are giving you an insecure feeling of claustrophobia. \n\nYou can continue onwards to the waterway canals to your east and west." );

 set_exits( ([
  "east" : DIR+"/rooms/sewer/x40y10z-10.c",
  "west" : DIR+"/rooms/sewer/x20y10z-10.c"
  ]) );
}
