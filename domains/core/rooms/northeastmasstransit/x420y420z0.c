inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 420);
  set_property("y", 420);
  set_property("z", 0);

  add_area( "northeastmasstransit" );
  set_short( "Northeast Mass-Transit Node" );
  set_long( "This circular room is in the very center of a tiny dome that is a connector for all of the domes in the Northeast District. Use any exit to be instantly transported via mass-transit tube to the listed destination.\n\n%^CYAN%^+----------%^RESET%^%^RED%^D I R E C T O R Y%^RESET%^%^CYAN%^------------+\n%^CYAN%^|                                       |\n%^CYAN%^|    %^RESET%^W - North Mass-Transit Node%^CYAN%^        |\n%^CYAN%^|    %^RESET%^S - East Mass-Transit Node         %^CYAN%^|\n%^CYAN%^|                                       %^CYAN%^|\n%^CYAN%^+---------------------------------------+\n%^RESET%^" );

 set_exits( ([
  "south" : DIR+"/rooms/eastmasstransit/x420y0z0.c",
  "west" : DIR+"/rooms/northmasstransit/x0y420z0.c"
  ]) );
}
