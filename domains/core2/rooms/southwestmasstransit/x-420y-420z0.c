inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -420);
  set_property("y", -420);
  set_property("z", 0);

  add_area( "southwestmasstransit" );
  set_short( "Southwest Mass-Transit Node" );
  set_long( "This circular room is in the very center of a tiny dome that is a connector for all of the domes in the Southwest District.  Use any exit to be instantly transported via mass-transit tube to the listed destination.\n\n%^CYAN%^+----------%^RESET%^%^RED%^D I R E C T O R Y%^RESET%^CYAN%^------------+\n%^CYAN%^|                                       |\n%^CYAN%^|%^RESET%^    N - West Mass-Transit Node         %^CYAN%^|\n%^CYAN%^|%^RESET%^    E - South Mass-Transit Node        %^CYAN%^|\n%^CYAN%^|                                       |\n%^CYAN%^+---------------------------------------+%^RESET%^\n" );

 set_exits( ([
  "north" : DIR+"/rooms/westmasstransit/x-420y0z0.c",
  "east" : DIR+"/rooms/southmasstransit/x0y-420z0.c"
  ]) );
}
