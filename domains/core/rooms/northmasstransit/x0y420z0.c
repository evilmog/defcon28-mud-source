inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 0);
  set_property("y", 420);
  set_property("z", 0);

  add_area( "northmasstransit" );
  set_short( "North Mass-Transit Node" );
  set_long( "%^CYAN%^+----------%^RED%^D I R E C T O R Y%^CYAN%^------------+\n|                                       |\n|    %^RESET%^%^BOLD%^S%^RESET%^ - Northern Housing Dome%^CYAN%^          |\n|    %^RESET%^%^BOLD%^N%^RESET%^ - Northern Mining Dome%^CYAN%^           |\n|    %^RESET%^%^BOLD%^W%^RESET%^ - Northwest Mass-Transit Node    %^CYAN%^|\n|                                       |\n+---------------------------------------+\n" );

 set_exits( ([
  "north" : DIR+"/rooms/northmine/x0y590z0.c",
  "south" : DIR+"/rooms/north/x0y310z0.c",
  "east" : DIR+"/rooms/northeastmasstransit/x420y420z0.c",
  "west" : DIR+"/rooms/northwestmasstransit/x-420y420z0.c"
  ]) );
}
