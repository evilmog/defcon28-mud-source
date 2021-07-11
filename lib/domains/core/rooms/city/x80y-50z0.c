inherit "/std/room";

#include "../../domain.h" 
void setup( void ) {

  #include "area.h"

  set_property("x", 80);
  set_property("y", -50);
  set_property("z", 0);

  add_area( "city" );
  set_short( "EvilMog Park" );
  set_long( "Ok its blatently apparent that evilmog is running out of material, he needs coffee badly. This park extends out everywhere, grass is green, plants are overgrown, climate is humid because well it just is." );


  set_objects( 
 DIR+"/monsters/zombie.c", 
 DIR+"/monsters/snapperjaw.c", 
 DIR+"/monsters/snapperjaw.c"
);
 set_exits( ([
  "north" : DIR+"/rooms/city/x80y-40z0.c",
  "east" : DIR+"/rooms/city/x90y-50z0.c",
  "west" : DIR+"/rooms/city/x70y-50z0.c"
  ]) );
}
