inherit "/std/room";
inherit "/std/minerals";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 30);
  set_property("y", 40);
  set_property("z", 0);

  add_action("do_minerals", "list");
  add_action("do_playerminerals", "minerals");
  add_action("do_purchaseminerals", "purchase");
  add_action("do_sellminerals", "redeem");

  add_area( "city" );
  set_short( "Company Metal Exchange Index" );
  set_long( "Upon entering the room you are shocked by the deafening noise that permeates the room. Company employees are running all over the place waving colored slips of paper.  Some look radiantly happy while others look ready to kill themselves. In front of you is a very large list showing the current prices of the stocks for trade on the market.\n\nSeveral account terminals and trade terminals have been mounted along the walls.\n\nType %^GREEN%^list%^CYAN%^ to get a list of minerals.\nType %^GREEN%^minerals%^CYAN%^ to get a list of your mineral holdings.\nType %^GREEN%^purchase%^CYAN%^ to purchase minerals.\nType%^GREEN%^ redeem%^CYAN%^ to sell minerals" );

 set_exits( ([
  "south" : DIR+"/rooms/city/x30y30z0.c"
  ]) );
}

