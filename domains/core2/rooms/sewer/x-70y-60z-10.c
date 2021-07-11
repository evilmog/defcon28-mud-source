inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", -60);
  set_property("z", -10);

  add_area( "sewer" );
  set_short( "Sewage Separator" );
  set_long( "The main access tunnel actually ends with a decent floor here. The sewage you were formerly in is being sucked into a huge machine, which you deduce correctly to be a sewage separator machine. The machine has two output chutes, one which goes south and the other west. A faint smell of burning comes from the south, while you detect the smell of excrement from your west.\n\nTo your south is a corridor, while to your west is a waterway canal. A main access tunnel is located to your northeast. " );

 set_exits( ([
  "south" : DIR+"/rooms/sewer/x-70y-70z-10.c",
  "west" : DIR+"/rooms/sewer/x-80y-60z-10.c",
  "northeast" : DIR+"/rooms/sewer/x-60y-50z-10.c"
  ]) );
}
