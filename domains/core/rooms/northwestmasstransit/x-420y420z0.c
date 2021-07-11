inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -420);
  set_property("y", 420);
  set_property("z", 0);

  add_area( "northwestmasstransit" );
  set_short( "Northwest Mass-Transit Node" );
  set_long( "This circular room is in the very center of a tiny dome that is a connector for all of the domes in the Northwest District.  Use any exit to be instantly transported via mass-transit tube to the listed destination.\n\n%^CYAN%^+----------%^RESET%^%^RED%^D I R E C T O R Y%^RESET%^%^CYAN%^------------+\n%^CYAN%^|                                       |\n%^CYAN%^|    %^RESET%^E - North Mass-Transit Node%^CYAN%^        |\n%^CYAN%^|    %^RESET%^S - West Mass-Transit Node         %^CYAN%^|\n%^CYAN%^|                                       %^CYAN%^|\n%^CYAN%^+---------------------------------------+\n%^RESET%^" );

 set_exits( ([
  "south" : DIR+"/rooms/westmasstransit/x-420y0z0.c",
  "east" : DIR+"/rooms/northmasstransit/x0y420z0.c"
  ]) );
}
