inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -420);
  set_property("y", 0);
  set_property("z", 0);

  add_area( "westmasstransit" );
  set_short( "West Mass-Transit Node" );
  set_long( "This circular room is in the very center of a tiny dome that is a connector for all of the domes in the West District.  Use any exit to be instantly transported via mass-transit tube to the listed destination.\n\n%^CYAN%^+----------%^RESET%^%^RED%^D I R E C T O R Y%^RESET%^%^CYAN%^------------+\n%^CYAN%^|                                       %^CYAN%^|\n%^CYAN%^|%^RESET%^    W - West Mining Dome               %^CYAN%^|\n%^CYAN%^|%^RESET%^    E - West Housing Dome              %^CYAN%^|\n%^CYAN%^|%^RESET%^    N - Northwest Mass-Transit Node    %^CYAN%^|\n%^CYAN%^|%^RESET%^    S - Southwest Mass-Transit Node    %^CYAN%^|\n%^CYAN%^|                                       %^CYAN%^|\n%^CYAN%^+---------------------------------------+\n%^RESET%^" );

 set_exits( ([
  "north" : DIR+"/rooms/northwestmasstransit/x-420y420z0.c",
  "south" : DIR+"/rooms/southwestmasstransit/x-420y-420z0.c",
  "east" : DIR+"/rooms/west/x-310y0z0.c",
  "west" : DIR+"/rooms/westmine/x-590y0z0.c"
  ]) );
}
