inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -20);
  set_property("y", 90);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Main Access Tunnel" );
  set_long( "Wading in the middle of a gigantic sewage tunnel is bad enough, but it just does not get any worst when the smell is nauseatingly bad. Still at least the high ceiling allows the bad stench to relatively dissipate a little. Your worries, however, are more concentrated on the sewage which you're wading in. You never know what is in it.\n\n You may continue to the east or west. The end of a large pipe juts out from the southern wall." );

  add_item("pipe", "This is a pipe");
 set_exits( ([
  "east" : DIR+"/rooms/sewer/x-10y90z-10.c",
  "west" : DIR+"/rooms/sewer/x-30y90z-10.c"
  ]) );
 set_hidden_exits( ([
  "pipe" : DIR+"/rooms/sewer/x-20y80z-10.c",
  ]) );
}
