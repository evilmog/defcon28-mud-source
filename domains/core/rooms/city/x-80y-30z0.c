inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -80);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Human Resources - Corridor" );
  set_long( "Even several hundred years after other intelligent life was contacted, this department still retains the somewhat offensive name of Human Resources. There is a room to the south where advancements and promotions are handled. The main corridor continues to the southeast.  To the north is the director's office and the exit from the department." );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-80y-20z0.c",
  "south" : DIR+"/rooms/city/x-80y-40z0.c",
  "southeast" : DIR+"/rooms/city/x-70y-40z0.c"
  ]) );
}
