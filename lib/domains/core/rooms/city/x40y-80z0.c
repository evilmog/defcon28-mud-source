inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", -80);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Starport Hallway: South End" );
  set_long( "This is the southern end of the hallway that runs from the immigration shuttle, immediately to the south, all the way to the Starport Intake and the Colony administration offices.\n\nThe low bass rumbling sound of starship engines is nearly overwhelming, penetrating and rattling the skull of even the thickest-headed vaurgch or dullest human. A brief respite from this noise may be found in the insulated Customs Office, located through the west door." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x40y-70z0.c",
  "south" : DIR+"/rooms/city/x40y-90z0.c",
  "west" : DIR+"/rooms/city/x30y-80z0.c"
  ]) );
}
