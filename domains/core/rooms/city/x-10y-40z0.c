inherit "/std/room";
inherit "/std/evil/clinic";

#define TO this_object()

#include "../../domain.h"

void setup( void ) {
  int plvl, pcost, gcost;
  #include "area.h"
  gcost = 4000;
  plvl = this_player()->query_level();
  pcost = (plvl) * gcost;
  set_property("x", -10);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Sketchy Clinic" );
  set_long( "This appears to be some sort of sketchy clinic. The tiles haven't been cleaned in ages and the floor is covered in blood.\n\nType '%^MAGENTA%^list%^CYAN%^' to get a list of services.%^RESET%^" );

  add_action("do_immune", "immune");
  add_action("do_list", "list");
  add_action("do_heal", "heal");
 set_exits( ([
  "west" : DIR+"/rooms/city/x-20y-40z0.c"
  ]) );
}


