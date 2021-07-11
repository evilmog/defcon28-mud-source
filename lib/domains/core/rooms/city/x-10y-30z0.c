inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -10);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Medical Shop" );
  set_long( "%^RED%^THIS SHOP IS BROKEN\n\n%^CYAN%^This looks like a dusty broom closet with some medical vending machines thrown in. The floors are dusty and the place looks like it hasn't been swept in a while.\n\nA %^MAGENTA%^list%^CYAN%^ of products is on the wall." );
  set_long_mxp( "%^RED%^THIS SHOP IS BROKEN\n\n%^CYAN%^%^MXP_LSM%^This looks like a dusty broom closet with some medical vending machines thrown in. The floors are dusty and the place looks like it hasn't been swept in a while.\n\nA %^MAGENTA%^<Click>list</Click>%^CYAN%^ of products is on the wall." );

 
 set_exits( ([
  "west" : DIR+"/rooms/city/x-20y-30z0.c"
  ]) );
}
