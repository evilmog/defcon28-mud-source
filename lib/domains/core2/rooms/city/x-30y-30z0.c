inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", -30);
  set_property("y", -30);
  set_property("z", 0);

  add_area( "city" );
  set_short( "Corporate Registry" );
  set_long( "This department was recently gutted by President EvilMog, apparently you cant get charged with a crime if there are no records of them. The walls are bare, the floor is bare, it looks like an industrial cleaning crew was through here recently" );

 set_exits( ([
  "north" : DIR+"/rooms/city/x-30y-20z0.c"
  ]) );
}
