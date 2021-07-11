inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 20);
  set_property("y", 20);
  set_property("z", 10);

  add_area( "city" );
  set_short( "CFTC Lobby" );
  set_long( "This is the lobby to the CFTC brokerage areas.  Behind the reception desk you notice a large metallic sign with engraved writing:\n\n-----------------------------------------\n|            %^RED%^Welcome to the%^RESET%^             |\n|  %^RED%^CITY Financial Trade Center Offices%^RESET%^  |\n-----------------------------------------\n\nThe hemispherical ceiling is at least thirteen feet above the marble floor.  Tall archways lead to the north and east.  A bright green neon sign above the double doors to the northeast says %^GHREEN%^Credit Cafe%^RESET%^.  Traders bustle between the lift and the corridors to the north and east, on their way between their firms and the trading center below.\n\nOn the front of the reception desk, a directory displays directions to other areas in the CFTC Offices." );

  add_item("directory", "%^CYAN%^+----------%^GREEN%^D I R E C T O R Y%^CYAN%^------------+\n|                                       |\n|    E - %^RESET%^L.T. Smith%^CYAN%^                     |\n|    N - %^RESET%^Galactic Securities%^CYAN%^            |\n|    N - %^RESET%^Mars Financial%^CYAN%^                 |\n|   NE - %^RESET%^Credit Cafe%^CYAN%^                    |\n|                                       |\n+---------------------------------------+");
 set_exits( ([
  "north" : DIR+"/rooms/city/x20y30z10.c",
  "east" : DIR+"/rooms/city/x30y20z10.c",
  "northwest" : DIR+"/rooms/city/x10y30z10.c",
  "down" : DIR+"/rooms/city/x20y20z0.c"
  ]) );
}
