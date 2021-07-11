inherit "/std/room";
inherit "/std/evil/advance";

#include "../../domain.h"
void setup( void ) {

  #include "area.h"

  set_property("x", -70);
  set_property("y", -40);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Testing Center" );
  set_long("This is the testing center, here you can have the company AI regenerate your genetic profile. This will result in different physical attributes after you go through the recombinator.\n\nType %^GREEN%^recast%^CYAN%^ to be regenerated.");

  add_action("do_recast", "recast");

 set_exits( ([
  "south" : DIR+"/rooms/city/x-70y-40z0.c"
  ]) );
}

