inherit "/std/room";
inherit "/std/evil/sketchymining";
#include "../../domain.h"

void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -50);
  set_property("z", 0);


  add_action("do_list", "list");
  add_action("do_upgrade", "upgrade");
  add_area( "city" );
  set_short( "Mining Pass Office" );
  set_long( "This is a dull looking office, the walls are bare metal and the floor is a more scuffed up version of the same. An autobot is behind the desk.\n\nType '%^MAGENTA%^list%^CYAN%^' to find out the prices of the passes. Type %^MAGENTA%^upgrade%^CYAN%^ to upgrade your pass." );
  set_long_mxp( "%^MXP_LSM%^This is a dull looking office, the walls are bare metal and the floor is a more scuffed up version of the same. An autobot is behind the desk.\n\nType '%^MAGENTA%^<Click>list</Click>%^CYAN%^' to find out the prices of the passes. Type %^MAGENTA%^<send href=\"upgrade mining \" PROMPT>upgrade</send>%^CYAN%^ to upgrade your pass." );

 set_exits( ([
  "west" : DIR+"/rooms/city/x-20y-50z0.c"
  ]) );
}

