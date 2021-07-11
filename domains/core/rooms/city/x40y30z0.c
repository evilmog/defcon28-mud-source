inherit "/std/room";
inherit "/std/stock";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 40);
  set_property("y", 30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Universal Company Stock Index" );
  set_long( "Upon entering the room you are shocked by the deafening noise that permeates the room. Company employees are running all over the place waving colored slips of paper.  Some look radiantly happy while others look ready to kill themselves. In front of you is a very large list showing the current prices of the stocks for trade on the market.\n\nSeveral account terminals and trade terminals have been mounted along the walls.\n\nType %^GREEN%^list%^RESET%^ to get a listing of stocks.\nType %^GREEN%^stocks%^CYAN%^ to get a list of your stock holdings.\nType %^GREEN%^purchase%^CYANT%^ to buy stocks.\nType %^GREEN%^redeem%^CYAN%^ to sell stocks." );
  add_action("do_stocks", "list");
  add_action("do_playerstocks", "stocks");
  add_action("do_purchasestock", "purchase");
  add_action("do_sellstock", "redeem");
 set_exits( ([
  "west" : DIR+"/rooms/city/x30y30z0.c"
  ]) );
}

