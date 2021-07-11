inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", -420);
  set_property("z", 0);

  add_area( "southmasstransit" );
  set_short( "South Mass-Transit Node" );
  set_long( "This circular room is in the very center of a tiny dome that is a connector for all of the domes in the South District.  Use any exit to be instantly transported via mass-transit tube to the listed destination.\n\n%^CYAN%^+----------%^RED%^D I R E C T O R Y%^CYAN%^------------+\n%^CYAN%^|                                       |\n%^CYAN%^|%^RESET%^    S - Southern Mining Dome           %^CYAN%^|\n%^CYAN%^|%^RESET%^    N - Southern Housing Dome          %^CYAN%^|\n%^CYAN%^|%^RESET%^    E - Southeast Mass-Transit Node    %^CYAN%^|\n%^CYAN%^|%^RESET%^    W - Southwest Mass-Transit Node    %^CYAN%^|\n%^CYAN%^|%^RESET%^   SW - Fusion Reactor, SW Quadrant    %^CYAN%^|\n%^CYAN%^|                                       %^CYAN%^|\n%^CYAN%^+---------------------------------------+%^RESET%^\n" );

 set_exits( ([
  "north" : DIR+"/rooms/south/x0y-310z0.c",
  "south" : DIR+"/rooms/southmine/x0y-590z0.c",
  "east" : DIR+"/rooms/southeastmasstransit/x420y-420z0.c",
  "west" : DIR+"/rooms/southwestmasstransit/x-420y-420z0.c"
  ]) );
}
