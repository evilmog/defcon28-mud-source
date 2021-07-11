inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 420);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "eastmasstransit" );
  set_short( "East Mass-Transit Node" );
  set_long( "This circular room is in the very center of a tiny dome that is a connector for all of the domes in the East District.  Use any exit to be instantly transported via mass-transit tube to the listed destination.\n\n%^CYAN%^+----------%^RED%^D I R E C T O R Y%^RESET%^%^CYAN%^------------+\n|                                       |\n|%^RESET%^    W - Eastern Housing Dome           %^CYAN%^|\n|%^RESET%^    E - Eastern Mining Dome            %^CYAN%^|\n|%^RESET%^    S - Southeast Mass-Transit Node    %^CYAN%^|\n|                                       |\n+---------------------------------------+%^RESET%^\n%^RESET%^" );

 set_exits( ([
  "north" : DIR+"/rooms/northeastmasstransit/x420y420z0.c",
  "south" : DIR+"/rooms/southeastmasstransit/x420y-420z0.c",
  "east" : DIR+"/rooms/eastmine/x590y0z0.c",
  "west" : DIR+"/rooms/east/x310y0z0.c"
  ]) );
}
