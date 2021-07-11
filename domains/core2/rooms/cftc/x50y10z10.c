inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 50);
  set_property("y", 10);
  set_property("z", 10);

  add_area( "cftc" );
  set_short( "L.T. Smith: Lobb" );
  set_long( "The Lobby of L.T. Smith headquarters.  A large portrait of President Smith hangs high on the south wall above the 10' long mohogany reception desk. Two navy blue couches with wooden arms are in northeast corner against each wall, a wooden circular table in the corner.  A water cooler sits sits to the left of the reception desk.\n\nThe trade offices and President Smith's office are to the east." );

  add_item("couches", "The couches have a wooden frame.  The padding is navy blue.");
  add_item("table", "a wooden circular table");
  add_item("cooler", "The water cooler has taps for room temperature, hot, and cold.  Lights show if water is currently being heated or cooled.  A cup dispenser is attached on the left of the water tank.");

  set_objects( 
 DIR+"/monsters/jackie.c"
);
}
