inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 420);
  set_property("y", -420);
  set_property("z", 0);

  add_area( "southeastmasstransit" );
  set_short( "Southeast Mass-Transit Node" );
  set_long( "This circular room is in the very center of a tiny dome that is a connector for all of the domes in the Southeast District.  Use any exit to be instantly transported via mass-transit tube to the listed destination.\n\n%^CYAN%^+----------%^RED%^D I R E C T O R Y%^CYAN%^------------+\n%^CYAN%^|                                       %^CYAN%^|\n%^CYAN%^|%^RESET%^    N - East Mass-Transit Node         %^CYAN%^|\n%^CYAN%^|%^RESET%^    W - South Mass-Transit Node        %^CYAN%^|\n%^CYAN%^|%^RESET%^    S - Pleasure Dome                  %^CYAN%^|\n%^CYAN%^|%^RESET%^    E - Industrial Complex             %^CYAN%^|\n%^CYAN%^|                                       |\n%^CYAN%^+---------------------------------------+%^RESET%^\n" );

 set_exits( ([
  "north" : DIR+"/rooms/eastmasstransit/x420y0z0.c",
  "south" : DIR+"/rooms/nympho/x420y-560z0.c",
  "west" : DIR+"/rooms/southmasstransit/x0y-420z0.c"
  ]) );
}
