inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 90);
  set_property("y", 0);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Sewer Passage" );
  set_long( "You look around the broad sewer passage, marvelling at the orange hue which everything here seems to have taken. Musty air which seems to have never been circulated is taken in by you. This place doesn't look terribly safe. \n\nAn access shaft is located to your east. The sewer passage continues to your west. " );


  set_objects( 
 DIR+"/monsters/largeheptosquid.c"
);
}
