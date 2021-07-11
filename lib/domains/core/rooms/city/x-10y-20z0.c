inherit "/std/room";
inherit "/std/evil/shop";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -20);
  set_property("z", 0);

  add_area( "city" );
   add_action("do_list", "list");
   add_action("do_order", "order");

   set_short("A sketchy shop");
   set_long("You are in a sketchy shop. You can %^MAGENTA%^order%^RESET%^ stuff here.");
   set_long_mxp("You are in a sketchy shop. You can %^MXP_LSM%^<send \"order\">%^EXT_122%^order</send>%^CYAN%^ stuff here.");

 set_exits( ([
  "west" : DIR+"/rooms/city/x-20y-20z0.c"
  ]) );
}
