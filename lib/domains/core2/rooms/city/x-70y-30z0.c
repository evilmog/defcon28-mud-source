inherit "/std/room";

#include "../../domain.h"
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Testing Center" );
  set_long("This is the testing center, the problem is the AI has already judged us unworthy of improvement. You have exceeded your authorized break meatbag......get back to work.");

 set_exits( ([
  "south" : DIR+"/rooms/city/x-70y-40z0.c"
  ]) );
}
